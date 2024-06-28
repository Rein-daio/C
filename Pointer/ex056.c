#include<stdio.h>
main()
{
	int i, tdi[][3] = { {10,20,30}, { 40,50,60 }, { 70,80,90 } };
	int* p_tdi;
	p_tdi = tdi[0];
	for (i = 0; i < (3*3); i++) 
	{
		printf(" %d ", *p_tdi++);
	}
}