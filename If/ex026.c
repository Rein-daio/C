#include<stdio.h>
main()
{
	int y=0;

	printf("�������;");
	scanf("%d",&y);
	if (y==4 || y == 6 || y == 9 || y == 11) 
	{
		printf("�ŏI����30���ł�");
	}
	else if (y == 1||y == 3||y == 5||y == 7 || y == 8 || y == 10 || y == 12)
	{
		printf("�ŏI����31���ł�");
	}
	else if (y == 2)
	{
		printf("�ŏI����28���ł�");
	}
	else 
	{
		printf("(�G���[)������͂��Ă�������");
	}
}