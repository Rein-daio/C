#include<stdio.h>
int str(char* p);
main() {
	char bf[256];
	int mojisu;
	printf("������");
	gets(bf);
	mojisu = str(bf);
	printf("��������%d�����ł�", mojisu);
}
int str(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return(cnt);
}