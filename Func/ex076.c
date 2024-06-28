#include<stdio.h>
void sisoku(int x, int y, int* go, float *hey);
main()
{
	int a, b, c; 
	float d;
	printf("®”‚ğ2‚Â“ü—Í");
	scanf("%d%d", &a, &b);
	sisoku(a, b, &c, &d);
	printf("‡Œv=%d •½‹Ï=%.2f", c, d);
	return 0;
}
void sisoku(int x, int y, int* go, float* hey)
{
	*go = x + y;
	*hey = (float)*go/2;
	return;
}