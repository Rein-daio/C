#include<stdio.h>
void display(void);
int main(void)
{
	int a,b;
	printf("deta1? deta2?");
	scanf("%d%d", &a,&b);
	if (b == 0) {
		display();
	}
	else {
		printf("%d/%d=%d...%d\n", a, b, a / b, a % b);
	}
	return 0;
}
void display( void)
{
	printf("‚O‚ÅŠ„‚èZ‚Ío—ˆ‚Ü‚¹‚ñ\n");
	return;
}