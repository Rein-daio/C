#include<stdio.h>
int t_g1(int* p);
int t_g2(int* t[]);
main()
{
	int a[] = { 10,20,30,40,-999 }, g;
	g = t_g1(a);
	printf("g=%d\n", g);
	g = t_g2(a);
	printf("g=%d\n", g);
}
int t_g1(int* p) 
{
	int g = 0;
		while (*p != -999) 
		{
			g += *p;
			p++;
		}
		return(g);
}
int t_g2(int t[])
{
	int g = 0,i=0;
		while (t[i] != -999) 
		{
			g += t[i];
			i++;
		}
		return(g);
}