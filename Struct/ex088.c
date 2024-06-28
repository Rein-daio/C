#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
};
main()
{
	struct syo_d  syo1, syo2;
	strcpy(syo1.n, "‰”•M");
	syo1.ta = 30;
	syo2 = syo1;
	printf("syo1.n=%s\n", syo1.n);
	printf("syo1.ta=%d\n", syo1.ta);
	printf("syo2.n=%s\n", syo2.n);
	printf("syo2.ta=%d\n", syo2.ta);
	
	
}