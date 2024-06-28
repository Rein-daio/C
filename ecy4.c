#include<stdio.h>
main()
{
	char s[30];
	int i, k[20];
	printf("•¶š—ñ‚Ì“ü—Í");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("ˆÃ†‚Ì“ü—Í");
		scanf("%d", &k[i]);
		s[i] -= k[i];
	}
	printf("•¶š—ñ%s\n", &s[0]);
	printf("•¡†‚Í\n");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d ", k[i]);
	}
}