#include<stdio.h>
main()
{
	int a,b;
	printf("ŽÀ”?");
	scanf("%d%d", &a,&b);
	if (a > b)
	{
		printf("%d‚Í%d‚æ‚è%d‘å‚«‚¢",a,b,a-b);
	}
	if (a == b)
	{
		printf("%d‚Æ%d‚Í“™‚µ‚¢",a,b);
	}
	if (a < b)
	{
		printf("%d‚Í%d‚æ‚è%d¬‚³‚¢",a,b,b-a);
	}
}