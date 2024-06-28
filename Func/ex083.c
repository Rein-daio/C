#include<stdio.h>
int str(char* p);
main() {
	char bf[256];
	int mojisu;
	printf("•¶š—ñ");
	gets(bf);
	mojisu = str(bf);
	printf("•¶š”‚Í%d•¶š‚Å‚·", mojisu);
}
int str(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}