#include<stdio.h>
main()
{
	int a;
	printf("1����P�O�O�܂ł̐���?");
	scanf("%d", &a);
	if (a > 90&&a<100)
	{
		printf("���茋�ʂ͂T�ł�");
	}
	if (a > 80&&a<90)
	{
		printf("���茋�ʂ�4�ł�");
	}
	if (a > 50&&a<80)
	{
		printf("���茋�ʂ�3�ł�");
	}
	if (a > 30&&a<50)
	{
		printf("���茋�ʂ�2�ł�");
	}
	else
	{
		printf("���茋�ʂ�1�ł�");
	}
	
}