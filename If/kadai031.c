#include<stdio.h>
main()
{
	double a = 0, b = 0;
	printf("���������");
	scanf("%lf%*c%lf", &a, &b);
	printf("�傫���ق���");
	if (a > b) 
	{
		printf("%f\n", a);
    }
	else
	{
		printf("%f\n", b);
	}
	
}