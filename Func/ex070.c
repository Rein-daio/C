#include<stdio.h>
main()
{
	int a, b, k;
	printf("����������");
	scanf("%d%d", &a, &b);
	k = add(a, b);
	printf("���v��%d�ł�\n", k);
	printf("���v��%d�ł�\n", add(a,b));
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}