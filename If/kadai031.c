#include<stdio.h>
main()
{
	double a = 0, b = 0;
	printf("整数を入力");
	scanf("%lf%*c%lf", &a, &b);
	printf("大きいほうは");
	if (a > b) 
	{
		printf("%f\n", a);
    }
	else
	{
		printf("%f\n", b);
	}
	
}