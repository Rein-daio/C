#include<stdio.h>
#include<conio.h>
#define QSIZE 8
int que[QSIZE];
int h = 0;
int t = 0;

void dis(void);
int eq(int d);
int dq(int* pd);
main()
{
	int k, dt, r;
	do {
		printf("\n\n�C���L���[��i�f�L���[��o��������");
		k = getche();
		printf("\n");

		if (k == 'i') {
			printf("�f�[�^����");
			scanf("%d", &dt);
			r = eq(dt);
			if (r == -1) {
				printf("�L���[����t�ł�");

			}
			else {
				dis();
			}
		}
		if (k == 'o') {
			r = dq(&dt);
			if (r == -1) {
				printf("�L���[����");

			}
			else {
				printf("�L���[����f�[�^(%d)����菜��",dt);
				dis();
			}
		}
	} while (k != 'e');
}
void dis(void)
{
	int i;
	printf("\n�L���[�̓��e\n");
	for (i = 0; i < QSIZE; i++)
	{
		printf("Q[%2d]��%5d", i, que[i]);
		if (i == h) {
			printf("h�̎����ꏊh��%d", h);

		}
		if (i == t) {
			printf("t�̎����ꏊt��%d", t);

		}
		printf("\n");
	}
	return;
}

int eq(int d)
{
	if ((t+1)%QSIZE==h) { return -1; }
	que[t] = d;
	t++;
	t = t % QSIZE;
	return 0;
}
int dq(int* pd)
{
	if (h == t) { return -1; }
	*pd = que[h];
	que[h] = 0;
	h++;
	h = h % QSIZE;
	return 0;
}