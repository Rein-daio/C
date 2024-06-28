#include<stdio.h>
main()
{
	int a, b,c, k;
	float l;
	printf("®”‚ğ3‚Â“ü—Í");
	scanf("%d%d%d", &a, &b,&c);
	k = add(a, b,c);
	l = az(a, b,c);
	printf("‡Œv%d •½‹Ï%.2f\n", k,l );
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