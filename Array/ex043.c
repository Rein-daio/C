#include<stdio.h>
main()
{
	int i;
	char deta[] = "orange";
	printf("������:");
	for (i = 0; deta[i] != '\0'; i++)
	{
		printf("%c", deta[i]);
	}
	printf("��������%d", i);
}