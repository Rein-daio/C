#include<stdio.h>
main()
{
	int a, b,c, k;
	float l;
	printf("整数を3つ入力");
	scanf("%d%d%d", &a, &b,&c);
	k = add(a, b,c);
	l = az(a, b,c);
	printf("合計%d 平均%.2f\n", k,l );
}
int add(int a, int b,int c)
{
	int ans;
	ans = a + b + c;
	return ans;
}
float az(int a, int b,int c)
{
	int ans;
	ans = (a + b + c)/3;
	return ans;
}