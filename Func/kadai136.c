#include<stdio.h>
void vk(int a, int b,int *c);
main()
{
	int x, y,z;
	printf("��̐��������");
	scanf("%d%d", &x, &y);
	vk(x,y,&z);
	printf("max=%d", z);
}
void vk(int a, int b, int *c)
{
	if (a > b)
	{
		*c = a;
	}
	if (a < b)
	{
		*c = b;
	}
}