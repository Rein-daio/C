#include<stdio.h>
main()
{
	int y=0;

	printf("月を入力;");
	scanf("%d",&y);
	if (y==4 || y == 6 || y == 9 || y == 11) 
	{
		printf("最終日は30日です");
	}
	else if (y == 1||y == 3||y == 5||y == 7 || y == 8 || y == 10 || y == 12)
	{
		printf("最終日は31日です");
	}
	else if (y == 2)
	{
		printf("最終日は28日です");
	}
	else 
	{
		printf("(エラー)月を入力してください");
	}
}