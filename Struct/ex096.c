#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
};
void dis1(int a);
void dis2(struct syo_d  syo);
void dis3(struct syo_d *p);
main()
{
	int a = 10;
	struct syo_d  syo = { "消しゴム",50 };
	dis1(a);//値渡し
	dis2(syo);//値渡し
	dis3(&syo);//アドレス渡し
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
void dis3(struct syo_d  *p)
{
	printf("p->n=%s\t", p->n);
	printf("p->ta=%d\n", p->ta);
	//アドレス渡しは書き換えが可能
	p->ta = 100;
	strcpy(p->n,"値上げ消しゴム");
	//文字列代入は宣言時のみ
}