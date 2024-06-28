#include<stdio.h>	
main()
{
	int a,b,c;
	printf("   1 2 3 4 5 6 7 8 9\n");
	printf("====================\n");
	for (b= 1; b < 10; b++) 
	{
		printf("%d|", b);
		for (a=1,c = 1; c < 10; c++) 
		{
         printf(" %d ", a * b);
		 a++;
		}
		printf("\n");
	}
}