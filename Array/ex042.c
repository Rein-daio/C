#include<stdio.h>
main()
{
	int i;
	char deta[6] =  "Apple";
	printf("1文字づつ表示\n");
	for (i = 0; deta[i] != '\0'; i++) 
	{
		printf("%c\n", deta[i]);
	}
	printf("\n文字列で表示\n");
	//printf("%s", &deta[0]);
	printf("%s", deta);
}
//配列名だけを書くと先頭アドレスを表す