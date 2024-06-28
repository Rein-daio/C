#include<stdio.h>
int t_g3(int t[],int num);
main()
{
	int a[] = { 10,20,30,40,50 }, g;
	g = t_g3(a,5);
	printf("g=%d\n", g);
}
int t_g3(int t[], int num)
{
	int g = 0, i = 0;
	while (i<5 )
	{
		num+= t[i];
		i++;
	}
	return(num);
}
