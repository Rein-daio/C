#include<stdio.h>
main()
{
	int i;
	char deta[] = "orange";
	printf("文字列:");
	for (i = 0; deta[i] != '\0'; i++)
	{
		printf("%c", deta[i]);
	}
	printf("文字数は%d", i);
}