#include<stdio.h>
main()
{
	int y=0;

	printf("��������;");
	scanf("%d",&y);
	if (y%4 == 0 &&! y%100==0||y%400==0)
	{
		printf("���邤�N");
	}
	else
	{
		printf("���邤�N�ł͂Ȃ�");
	}
}