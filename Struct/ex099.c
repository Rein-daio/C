#include<stdio.h>
#define D_END -1
struct ken {
	int codo;
	char n[20];
	struct ken* next;
};
main()
{
	struct ken ken_d[] = { {1,"�k�C��",NULL},
						{2,"�X��",NULL},
						{3,"��茧",NULL},
						{4,"�{�錧",NULL},
						{5,"�H�c��",NULL},
						{6,"�R�`��",NULL},
						{7,"������",NULL},
						{D_END,"",NULL}, };
	struct ken* p, * wp;
	struct ken hyo = { 28, "���Ɍ�", NULL };
	p = wp = ken_d;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->codo != D_END);
	ken_d[0].next = &hyo;
	hyo.next = &ken_d[1];
	ken_d[1].next = &ken_d[3];
	for (p = ken_d; p->codo != D_END; p = p->next)
	{
		printf("codo=%d n=%s\n", p->codo, p->n);
	}
}