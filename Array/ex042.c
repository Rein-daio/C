#include<stdio.h>
main()
{
	int i;
	char deta[6] =  "Apple";
	printf("1�����Â\��\n");
	for (i = 0; deta[i] != '\0'; i++) 
	{
		printf("%c\n", deta[i]);
	}
	printf("\n������ŕ\��\n");
	//printf("%s", &deta[0]);
	printf("%s", deta);
}
//�z�񖼂����������Ɛ擪�A�h���X��\��