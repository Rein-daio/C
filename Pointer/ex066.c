#include<stdio.h>
main()
{
	char* p_g[3] = { "wii","ds","playstation4" };
	int i;
	char** p;
	p = p_g;
	for (i = 0; i < 3; i++) 
	{
		printf("%s\n", *p++);
	}
}