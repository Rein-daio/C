#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
	int ks;
};
main()
{
	struct syo_d  syo[3] = { {"‰”•M",30,5},{"Á‚µƒSƒ€",50,2},{"•M” ",500,3} };
	struct syo_d* p;
	int i;
	p = syo;
	for (i = 0; i < 3; i++)
	{
		printf("¤•i–¼=%s\t", (p+i)->n);
		printf("’P‰¿=%4d\t", (p + i)->ta);
		printf("ŒÂ”=%4d\n", (p + i)->ks);
		printf("‹àŠz\\%4d\n", (p + i)->ks*(p + i)->ta);
	}


}