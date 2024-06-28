#include<stdio.h>
main()
{
	char x ;
	int a;
	printf("アルファベット");
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