#include<stdio.h>
main()
{
	char moji;

	printf("文字を入力;");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("大文字");
	}
	else
	{
			printf("その他の文字");
	}
}