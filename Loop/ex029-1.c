#include<stdio.h>
main()
{
	int  i = 0;
	printf("数を入れて");
	scanf("%d", &i);
	while (i >0) {

		printf("*");
		i--;          //n -= 1; //i++でも可
	}
}