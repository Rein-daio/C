#include<stdio.h>
#include<string.h>
#define B_S 5
struct profile
{
	char name[20];
	int birht[3];
	char blood[5];
};
main()
{
	struct profile  fil[B_S];
	struct profile* p;
	p = &fil[0];
	int i;
	for (i = 0; i < B_S; i++) 
	{
		printf("���O�����:");
	    gets(p->name);
	    printf("���N�������󔒂ŋ�؂��ē���:");
	    scanf("%d%d%d%*c", &p->birht[0], &p->birht[1], &p->birht[2]);
	    printf("���t�^�����:");
	    gets(p->blood);
		p++;
    }
    p = fil;
	for(i=0;i<B_S;i++)
	{
		
		if (strcmp(p->blood,"A")==0)
		{ 
			printf("%s--%d�N%d��%d�����@���t�^-%s�^\n",p->name, p->birht[0], p->birht[1], p->birht[2], p->blood); 
		}
		p++;
	}
	
}