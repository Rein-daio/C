#include<stdio.h>
void str1(char* p1, char* p2);
main() {
	char bf1[256];
	char bf2[256];
	printf("•¶Žš—ñ1\n");
	gets(bf1);
	printf("•¶Žš—ñ2\n");
	gets(bf2);
	str1(bf1, bf2);
	printf("”z—ñ1");
	puts(bf1);
}
void str1(char* p1, char* p2)
{
	int i, j;
	for (i = 0; *(p1 + i) != '\0'; i++);
	
	for (j = 0; *(p2 + j) != '\0'; i++, j++)
	{
		*(p1 + i)=*(p2 + j) ;
	}
}