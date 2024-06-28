#include<stdio.h>
main()
{
	char* p_g[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	
	for (i = 0; i < 3; i++) 
	{
		p =&p_g[i];
		while (**p)
		{
			printf("%c", **p);
			(*p)++;
		}
		printf("\n");
	}
}