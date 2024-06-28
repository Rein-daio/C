#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char deta,deta2;

	c = scanf("%c%c",&deta,&deta2);
	while (c != EOF) 
	{
		printf("%d",c);
		putchar('\n');
		gets (dumy);
		c = scanf("%c%c", &deta,&deta2);
	}
	printf("%d\n", printf("HELLO\n"));
	printf("%d\n", printf("‚±‚ñ‚É‚¿‚í"));
}