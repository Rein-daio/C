#include<stdio.h>
main()
{
	int a, b, k;
	printf("®”‚ğ“ñ‚Â“ü—Í");
	scanf("%d%d", &a, &b);
	k = add(a, b);
	printf("‡Œv‚Í%d‚Å‚·\n", k);
	printf("‡Œv‚Í%d‚Å‚·\n", add(a,b));
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}