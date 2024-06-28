#include<stdio.h>
main()
{
	int a = 0;
	do {
		a++;
		printf(" %d ", a);
		if (a % 20 == 0) 
		{
			printf("\n");
		}
	} while (a < 60);
}