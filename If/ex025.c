#include<stdio.h>
main()
{
	char moji;

	printf("���������;");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A||moji >= 0x61 && moji <= 0x7A)
	{
		
			printf("�A���t�@�x�b�g");
	}
		else if (moji >= 0x30 && moji <= 0x39)
		{
			printf("����");
		}
		else
		{
			printf("���̑��̕���");
		}
}