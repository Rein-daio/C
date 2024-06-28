#include<stdio.h>
void sisoku(int x, int y,int z, int* hi, int* rou);
main()
{
	int a, b, c, d,e;
	printf("®”‚ð3‚Â“ü—Í");
	scanf("%d%d%d", &a, &b,&c);
	sisoku(a, b, c, &d,&e);
	printf("Å‘å’l=%d Å¬’l=%d", d, e);
	return 0;
}
void sisoku(int x, int y,int z, int* hi, int* rou)
{
	if (x > y) 
	{
		if (x > z) 
		{
			*hi = x;
		}
		else
		{
			*hi = z;
		}
		if (y > z)
		{
			*rou = z;
		}
		else
		{
			*rou = y;
		}
	}
	else
	{
		if (y> z) 
		{
			*hi = y;
		}
		else
		{
			*hi = z;
		}
		if (x > z)
		{
			*rou = z;
		}
		else
		{
			*rou = x;
		}
	}
	return;
}