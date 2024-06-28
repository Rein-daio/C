#include<stdio.h>
main()
{
	char moji;

	printf("•¶Žš‚ð“ü—Í;");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A)
	{
		printf("‘å•¶Žš");
	}
	else
	{
			printf("‚»‚Ì‘¼‚Ì•¶Žš");
	}
}