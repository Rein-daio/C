#include<stdio.h>
main()
{
	int a, b, k;
	printf("整数を二つ入力");
	scanf("%d%d", &a, &b);
	k = add(a, b);
	printf("合計は%dです\n", k);
	printf("合計は%dです\n", add(a,b));
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}