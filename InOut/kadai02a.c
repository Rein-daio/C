#include<stdio.h>
main()
{
	double a = 0, b = 0;
	printf("���������");
	scanf("%lf%*c%lf", &a,&b);
	printf("***%f��%f�̎l�����Z***\n", a, b);
	printf("�a%f\n", a + b);
	printf("��%f\n", a - b);
	printf("��%f\n", a * b);
	printf("��%f\n", a / b);
}