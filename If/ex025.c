#include<stdio.h>
main()
{
	char moji;

	printf("文字を入力;");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A||moji >= 0x61 && moji <= 0x7A)
	{
		
			printf("アルファベット");
	}
		else if (moji >= 0x30 && moji <= 0x39)
		{
			printf("数字");
		}
		else
		{
			printf("その他の文字");
		}
}