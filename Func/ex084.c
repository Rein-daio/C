#include<stdio.h>
void str1(char* p1 ,char* p2);
main() {
	char bf1[256];
	char bf2[256];
	printf("•¶Žš—ñ\n");
	gets(bf1);
	printf("%s\n",bf1);
	str1(bf1, bf2);
	printf("%s\n",bf2);
}
void str1(char* p1, char* p2)
{
	int i,j;
	for (i = 0; *(p1 + i) != '\0'; i++); 
			i--;
			for (j = 0; i>= 0; i--,j++) {
			*(p2 + j) = *(p1 + i);

		    }
			*(p2 + j) = '\0';
}