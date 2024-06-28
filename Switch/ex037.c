#include<stdio.h>
main()
{
	char obc;
	printf("‰‰Zq‚ğ“ü—Í\n");
	scanf("%c", &obc);
	switch(obc)
	{
	case  ' + '  :
		printf("‰ÁZ‚Å‚·");
		break;
	case  '-':
		printf("Œ¸Z‚Å‚·");
		break;
	case  '*':
		printf("æZ‚Å‚·");
		break;
	case '/':
		printf("œZ‚Å‚·");
		break;
	case '%':
		printf("‚ ‚Ü‚è‚Å‚·");
		break;
	difault:
		printf("‚»‚Ì‘¼‚Å‚·");
	}
}