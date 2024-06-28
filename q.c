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
		printf("\n\nインキューはiデキューはoを押して");
		k = getche();
		printf("\n");

		if (k == 'i') {
			printf("データ入力");
			scanf("%d", &dt);
			r = eq(dt);
			if (r == -1) {
				printf("キューが一杯です");

			}
			else {
				dis();
			}
		}
		if (k == 'o') {
			r = dq(&dt);
			if (r == -1) {
				printf("キューが空");

			}
			else {
				printf("キューからデータ(%d)を取り除く",dt);
				dis();
			}
		}
	} while (k != 'e');
}
void dis(void)
{
	int i;
	printf("\nキューの内容\n");
	for (i = 0; i < QSIZE; i++)
	{
		printf("Q[%2d]は%5d", i, que[i]);
		if (i == h) {
			printf("hの示す場所hは%d", h);

		}
		if (i == t) {
			printf("tの示す場所tは%d", t);

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