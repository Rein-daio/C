#include<stdio.h>
main()
{
	char obc;
	printf("���Z�q�����\n");
	scanf("%c", &obc);
	switch(obc)
	{
	case  ' + '  :
		printf("���Z�ł�");
		break;
	case  '-':
		printf("���Z�ł�");
		break;
	case  '*':
		printf("��Z�ł�");
		break;
	case '/':
		printf("���Z�ł�");
		break;
	case '%':
		printf("���܂�ł�");
		break;
	difault:
		printf("���̑��ł�");
	}
}