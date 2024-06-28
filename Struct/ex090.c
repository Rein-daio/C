#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
};
main()
{
	struct syo_d  syo;
	struct syo_d  *p;
	p = &syo;
	printf("¤•i–¼");
	scanf("%s", p->n);
	p->ta = 30;
	printf("p->n=%s\n", p->n);
	printf("p->ta=%d\n", p->ta);
	printf("syo.n=%s\n", syo.n);
	printf("syo.ta=%d\n", syo.ta);


}