#include<stdio.h>
main()
{
	int n,i=0 ;
	printf("数を入れて");
	scanf("%d", &n);
	while (n != i) {
		
		printf("*");
		i++;          //n -= 1; //i++でも可
	}
}