#include<stdio.h>
main()
{
	int i,j, tdi[][3] = { {10,20,30}, { 40,50,60 }, { 70,80,90 } };
	int* p_tdi;
	p_tdi = tdi[0];
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++)
		{
		printf(" %d ", *p_tdi++);
		}
		printf("\n");
		
	}
}