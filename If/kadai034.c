#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a > 0x60 && a < 0x7A)
	{
		printf("その文字は小文字です");
	}
	if (a > 0x40 && a < 0x5A)
	{
		printf("その文字は大文字です");
	}
	else
	{
		printf("エラー");
	}
}