#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int i,k[20];
	srand(time(0));
	rand();
	printf("文字列の入力");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	printf("文字列%s\n", &s[0]);
	printf("暗号は\n");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d ", k[i]);
	}
}