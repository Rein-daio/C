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
	printf("–¼‘O‚ğ“ü—Í:");
	gets(fil. name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d%*c", &fil.birht[0],&fil.birht[1],&fil.birht[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	gets( fil.blood);
	printf("%s--%d”N%dŒ%d“ú¶@ŒŒ‰tŒ^-%sŒ^\n",
		fil. name ,fil. birht[0], fil. birht[1], fil .birht[2], fil. blood);
}