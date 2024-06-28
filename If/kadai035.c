#include<stdio.h>
main()
{
	int a;
	printf("実数?");
	scanf("%d", &a);
	if (a > 0)
	{
		printf("入力値はプラスです");
	}
	if (a ==0)
	{
		printf("入力値は０です");
	}
	if (a <0)
	{
		printf("入力値はマイナスです");
	}
}