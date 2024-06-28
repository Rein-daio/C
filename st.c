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
		printf("\n\nプッシュはiポップはoを押して");
		k = getche();
		printf("\n");

		if (k == 'i') {
			printf("データ入力");
			scanf("%d", &d);
			r = p(d);
			if (r == -1) {
				printf("スタックが一杯です");

			}
			else {
				dis();
			}
		}
		if (k == 'o') {
			r = pop(&d);
			if (r == -1) {
				printf("スタックが一杯です");

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
	printf("内容");
	for (i = 0; i < STSIZE; i++)
	{
		printf("stack[%2d]は%5d", i, st[i]);
	 if (i == sp) {
		printf("spの示す場所spは%d", sp);

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