#include<stdio.h>
main()
{
	char moji;

	printf("���������;");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("�啶��");
	}
	else
	{
			printf("���̑��̕���");
	}
}