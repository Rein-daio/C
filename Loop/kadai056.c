#include<stdio.h>
main()
{
	char x ;
	int a;
	printf("�A���t�@�x�b�g");
	scanf("%c", &x);
	for (a = 0; a < 26; a++)
	{

		printf(" %c ", a + x);
		if (a+x == 122)
		{
			break;
		}
	}
}