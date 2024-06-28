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
	printf("–¼‘O‚ð“ü—Í:");
	gets(p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d%*c", &p->birht[0], &p->birht[1], &p->birht[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	gets(p->blood);
	printf("%s--%d”N%dŒŽ%d“ú¶@ŒŒ‰tŒ^-%sŒ^\n",
		p->name, p->birht[0], p->birht[1], p->birht[2], p->blood);
}