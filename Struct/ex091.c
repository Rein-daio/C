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
	struct profile  *p;
	p=&fil;
	printf("���O�����:");
	gets(p->name);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d%*c", &p->birht[0], &p->birht[1], &p->birht[2]);
	printf("���t�^�����:");
	gets(p->blood);
	printf("%s--%d�N%d��%d�����@���t�^-%s�^\n",
		p->name, p->birht[0], p->birht[1], p->birht[2], p->blood);
}