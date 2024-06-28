#include<stdio.h>
#define T_E 5
int t_g4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, g;
	g = t_g4(a);
	printf("g=%d\n", g);
}
int t_g4(int *p)
{
	int g = 0, i = 0;
	for(i=0;i < 5;i++)
	{
		g += *(p+i);
	}
	return(g);
}
