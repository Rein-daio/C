#include<stdio.h>
main()
{
	char x;
	int a;
	printf("�A���t�@�x�b�g");
	scanf("%c", &x);
	for (a = 0; a < 26; a++)
	{

		printf(" %c ", a + x-32);
		if (a + x -32== 90)
		{
			break;
		}
	}
}