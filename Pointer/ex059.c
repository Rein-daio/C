#include<stdio.h>
main()
{
	char d[15] = "C Language";
	char d2[15];
	char* p_d, * p_d2;
	p_d = d;
	p_d2 = d2;
	printf("deta[]=%s\n", p_d);
	while (*p_d2++ = *p_d++);//\0‚ª‘ã“ü‚³‚ê‚é‚Ü‚Å*p_d‚©‚ç*p_d2‚É‘ã“ü‚³‚ê‚é
	p_d2 = d2;
	printf("deta2[]=%s\n", p_d2);
	while (*p_d2)
	{
		putchar(*p_d2++);
	}
	putchar('\n');
}