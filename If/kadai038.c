#include<stdio.h>
main()
{
	char a;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &a);
	if (a > 0x60 && a < 0x7A)
	{
		printf("�ϊ����ʂ�%c",a-32);
	}
	if (a > 0x40 && a < 0x5A)
	{
		printf("�ϊ����ʂ�%c",a+32);
	}
	else
	{
		printf("%c",a);
	}
}