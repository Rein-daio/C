#include<stdio.h>
main()
{
	char s[30];
	int i, k[20];
	printf("文字列の入力");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("暗号の入力");
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("文字列%s\n", &s[0]);
	printf("複号は\n");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d ", k[i]);
	}
}