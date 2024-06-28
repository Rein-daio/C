#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
};
void dis1(int a);
void dis2(struct syo_d  syo);
main()
{
	int a = 10;
	struct syo_d  syo = { "è¡ÇµÉSÉÄ",50 };
	dis1(a);
	dis2(syo);

}
void dis1(int a)
{
	printf("a=%d\n", a);
}
void dis2(struct syo_d  syo)
{
	printf("syo.n=%s\t", syo.n);
	printf("syo.ta=%d\n", syo.ta);
}