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
	printf("名前を入力:");
	gets(fil. name);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d%*c", &fil.birht[0],&fil.birht[1],&fil.birht[2]);
	printf("血液型を入力:");
	gets( fil.blood);
	printf("%s--%d年%d月%d日生　血液型-%s型\n",
		fil. name ,fil. birht[0], fil. birht[1], fil .birht[2], fil. blood);
}