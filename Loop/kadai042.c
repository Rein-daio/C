#include<stdio.h>
main()
{
	int x=0, a=1;
	while (x < 300)
	{
		printf("%d+", a);
		x += a;
		a++;
	}
	printf("%d", a);
	x += a;
	printf("=%d", x);
}