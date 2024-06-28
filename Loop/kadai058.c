#include<stdio.h>
main()
{
	char x=0;
	int a,b;
	for (a = 32,b=1; a < 126; a++,b++)
	{
		printf("%x", a);
		printf(" %c ", a + x );
		if (b %10==0)
		{
			printf("\n");
		}
	}
}
