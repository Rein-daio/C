#include<stdio.h>
int str(char* p);
main() {
	char bf[256];
	int mojisu;
	printf("文字列");
	gets(bf);
	mojisu = str(bf);
	printf("文字数は%d文字です", mojisu);
}
int str(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}