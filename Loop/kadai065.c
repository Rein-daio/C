#include<stdio.h>
main()
{
	int a=1, b = 0;
		do 
		{
			printf("%d", a);
			printf("+");
				b += a;
				a++;
		} while (b < 300);
		printf("%d", a);
		b += a;
		printf("=%d",b);
}