#include<stdio.h>
main()
{
	char obc;
	printf("演算子を入力\n");
	scanf("%c", &obc);
	switch(obc)
	{
	case  ' + '  :
		printf("加算です");
		break;
	case  '-':
		printf("減算です");
		break;
	case  '*':
		printf("乗算です");
		break;
	case '/':
		printf("除算です");
		break;
	case '%':
		printf("あまりです");
		break;
	difault:
		printf("その他です");
	}
}