#include<stdio.h>
main()
{
	int a=0,b=0,c=0;
	while (a != -999)
	{
		b += a;
		c++;
		printf("®”");
		scanf("%d", &a);
		
	}
	printf("%d\n",b);
	printf("%f\n",(float)b/c);
}