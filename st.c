#include<stdio.h>
#define STSIZE 8
int st[STSIZE];
int sp = 0;

void dis(void);
int p(int di);
int pop(int* pd);
main()
{
	int k, d, r;
	do {
		printf("\n\n�v�b�V����i�|�b�v��o��������");
		k = getche();
		printf("\n");

		if (k == 'i') {
			printf("�f�[�^����");
			scanf("%d", &d);
			r = p(d);
			if (r == -1) {
				printf("�X�^�b�N����t�ł�");

			}
			else {
				dis();
			}
		}
		if (k == 'o') {
			r = pop(&d);
			if (r == -1) {
				printf("�X�^�b�N����t�ł�");

			}
			else {
				dis();
			}
		}
	} while (k != 'e');
}
void dis(void)
{
	int i;
	printf("���e");
	for (i = 0; i < STSIZE; i++)
	{
		printf("stack[%2d]��%5d", i, st[i]);
	 if (i == sp) {
		printf("sp�̎����ꏊsp��%d", sp);

	 }
	}	
	printf("\n");
}

int p(int d)
{
	if (sp >= STSIZE) { return -1; }
	st[sp] = d;
	sp++;
	return 0;
}
int pop(int *pd)
{
	if (sp == 0) { return -1; }
	sp--;
	*pd = st[sp];
	
	return 0;
}