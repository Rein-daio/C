#include<stdio.h>
main()
{
	int c,k=0;//C=–ß‚è’l
	int deta, g=0;

	printf("®”");
	c = scanf("%d", &deta);
	while (c != EOF)
	{
		g+=deta;
		k++;
		printf("®”");
		c = scanf("%d", &deta );
		
	}
	printf("‡Œv%d\n",g);
	printf("•½‹Ï%.3f\n",(float)g/k );
}