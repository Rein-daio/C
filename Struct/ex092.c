#include<stdio.h>
#include<string.h>
struct syo_d {
	char n[20];
	int ta;
	int ks;
};
main()
{
	struct syo_d  syo[3] = { {"���M",30,5},{"�����S��",50,2},{"�M��",500,3} };
	int i;
    for(i=0;i<3;i++)
	{
		printf("���i��=%s\t", syo[i].n);
		printf("�P��=%4d\t", syo[i].ta);
		printf("��=%4d\n", syo[i].ks);
    }
	

}