#include<stdio.h>
main()
{
	int n,t;
	printf("数を入れて");
	scanf("%d", &n);
	for (t = 1; t <= 5; t++)
		
		printf(" %d ", n*t);
}