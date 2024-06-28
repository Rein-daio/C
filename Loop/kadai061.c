#include<stdio.h>
main()
{
	int a = 0;
	do {
		a++;
		printf(" %d ", a);
		if (a % 10 == 0) 
		{
			printf("\n");
		}
	} while (a < 20);
}