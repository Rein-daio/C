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
	struct syo_d  syo = { "�����S��",50 };
	dis1(a);//�l�n��
	dis2(syo);//�l�n��
	dis3(&syo);//�A�h���X�n��
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
	//�A�h���X�n���͏����������\
	p->ta = 100;
	strcpy(p->n,"�l�グ�����S��");
	//���������͐錾���̂�
}