#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	int *p;

	p = gets(dumy);

	while (p != NULL)
	{
		printf("%s\n",dumy);
		p = gets(dumy);
	}
}