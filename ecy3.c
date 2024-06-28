#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int i,k[20];
	srand(time(0));
	rand();
	printf("•¶š—ñ‚Ì“ü—Í");
	scanf("%s", s);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 6;
		s[i] += k[i];
	}
	printf("•¶š—ñ%s\n", &s[0]);
	printf("ˆÃ†‚Í\n");
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d ", k[i]);
	}
}