#include<stdio.h>
main()
{
	char d[10] = "Orenge";
	char * p_d;
	char* p = "Apple";
	p_d = d;
	printf("data[]=");
	while (*p_d) {
		putchar(*p_d++);
	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}