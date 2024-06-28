#include<stdio.h>
main()
{
	char a;
	printf("アルファベット？");
	scanf("%c", &a);
	if (a > 0x60 && a < 0x7A)
	{
		printf("変換結果は%c",a-32);
	}
	if (a > 0x40 && a < 0x5A)
	{
		printf("変換結果は%c",a+32);
	}
	else
	{
		printf("%c",a);
	}
}