#include<stdio.h>
void display1(int a);
void display2(int *b);
int main(void)
{
	int a,b;
	printf("deta1?");
	scanf("%d", &a);
	display1(a);
	printf("a=%d\n\n", a);
	printf("deta2?");
	scanf("%d", &b);
	display2(&b);
	printf("b=%d\n\n", b);
	return 0;
}
void display1(int a)
{
	printf("入力データ=%d\n", a);
	a += 10;
	return;
}
void display2(int *b)
{
	printf("入力データ=%d\n", *b);
	*b += 10;
	return;
}