#include<stdio.h>
main()
{
	int a,b;
	printf("����?");
	scanf("%d%d", &a,&b);
	if (a > b)
	{
		printf("%d��%d���%d�傫��",a,b,a-b);
	}
	if (a == b)
	{
		printf("%d��%d�͓�����",a,b);
	}
	if (a < b)
	{
		printf("%d��%d���%d������",a,b,b-a);
	}
}