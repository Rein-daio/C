#include<stdio.h>
main()
{
	char s[30];
	int i;

	printf("文字列の入力");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			s[i] -= 1;
		}
		else
		{
			s[i] += 1;
		}

	}
	printf("%s", &s[0]);
}