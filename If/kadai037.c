#include<stdio.h>
main()
{
	int a;
	printf("1から１００までの整数?");
	scanf("%d", &a);
	if (a > 90&&a<100)
	{
		printf("判定結果は５です");
	}
	if (a > 80&&a<90)
	{
		printf("判定結果は4です");
	}
	if (a > 50&&a<80)
	{
		printf("判定結果は3です");
	}
	if (a > 30&&a<50)
	{
		printf("判定結果は2です");
	}
	else
	{
		printf("判定結果は1です");
	}
	
}