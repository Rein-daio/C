#include<stdio.h>
main()
{
	int  i = 0;
	printf("��������");
	scanf("%d", &i);
	while (i >0) {

		printf("*");
		i--;          //n -= 1; //i++�ł���
	}
}