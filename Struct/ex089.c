#include<stdio.h>
#include<string.h>
struct profile
{
	char name[20];
	int birht[3];
	char blood[5];
};
main()
{
	struct profile  fil;
	printf("���O�����:");
	gets(fil. name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d%*c", &fil.birht[0],&fil.birht[1],&fil.birht[2]);
	printf("���t�^�����:");
	gets( fil.blood);
	printf("%s--%d�N%d��%d�����@���t�^-%s�^\n",
		fil. name ,fil. birht[0], fil. birht[1], fil .birht[2], fil. blood);
}