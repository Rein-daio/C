#include<stdio.h>
main()
{
	int a,b;
	printf("実数?");
	scanf("%d%d", &a,&b);
	if (a > b)
	{
		printf("%dは%dより%d大きい",a,b,a-b);
	}
	if (a == b)
	{
		printf("%dと%dは等しい",a,b);
	}
	if (a < b)
	{
		printf("%dは%dより%d小さい",a,b,b-a);
	}
}