#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a > 0x60 && a < 0x7A)
	{
		printf("���̕����͏������ł�");
	}
	if (a > 0x40 && a < 0x5A)
	{
		printf("���̕����͑啶���ł�");
	}
	else
	{
		printf("�G���[");
	}
}