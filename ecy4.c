#include<stdio.h>
main()
{
	char s[30];
	int i, k[20];
	printf("������̓���");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("�Í��̓���");
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("������%s\n", &s[0]);
	printf("������\n");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d ", k[i]);
	}
}