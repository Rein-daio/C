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
		printf("名前を入力:");
	    gets(p->name);
	    printf("生年月日を空白で区切って入力:");
	    scanf("%d%d%d%*c", &p->birht[0], &p->birht[1], &p->birht[2]);
	    printf("血液型を入力:");
	    gets(p->blood);
		p++;
    }
    p = fil;
	for(i=0;i<B_S;i++)
	{
		
		if (strcmp(p->blood,"A")==0)
		{ 
			printf("%s--%d年%d月%d日生　血液型-%s型\n",p->name, p->birht[0], p->birht[1], p->birht[2], p->blood); 
		}
		p++;
	}
	
}