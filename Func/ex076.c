#include<stdio.h>
void sisoku(int x, int y, int* go, float *hey);
main()
{
	int a, b, c; 
	float d;
	printf("整数を2つ入力");
	scanf("%d%d", &a, &b);
	sisoku(a, b, &c, &d);
	printf("合計=%d 平均=%.2f", c, d);
	return 0;
}
void sisoku(int x, int y, int* go, float* hey)
{
	*go = x + y;
	*hey = (float)*go/2;
	return;
}