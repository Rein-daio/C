#include<stdio.h>
void sisoku(int x, int y, int* go, float *hey);
main()
{
	int a, b, c; 
	float d;
	printf("������2����");
	scanf("%d%d", &a, &b);
	sisoku(a, b, &c, &d);
	printf("���v=%d ����=%.2f", c, d);
	return 0;
}
void sisoku(int x, int y, int* go, float* hey)
{
	*go = x + y;
	*hey = (float)*go/2;
	return;
}