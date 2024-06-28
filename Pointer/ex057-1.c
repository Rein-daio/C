#include<stdio.h>
main()
{
	int i,tdi[][3] = { {10,20,30}, { 40,50,60 }, { 70,80,90 } };
	int* p_tdi;
	p_tdi = tdi[0];
	for (i = 0; i < (3*3); i++) 
	{
		
		
		if (i>2&&i<6) 
		{
			printf(" %d ", *p_tdi);
		}
		*p_tdi++;
	}
}