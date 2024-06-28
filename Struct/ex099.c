#include<stdio.h>
#define D_END -1
struct ken {
	int codo;
	char n[20];
	struct ken* next;
};
main()
{
	struct ken ken_d[] = { {1,"–kŠC“¹",NULL},
						{2,"ÂXŒ§",NULL},
						{3,"ŠâŽèŒ§",NULL},
						{4,"‹{éŒ§",NULL},
						{5,"H“cŒ§",NULL},
						{6,"ŽRŒ`Œ§",NULL},
						{7,"•Ÿ“‡Œ§",NULL},
						{D_END,"",NULL}, };
	struct ken* p, * wp;
	struct ken hyo = { 28, "•ºŒÉŒ§", NULL };
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