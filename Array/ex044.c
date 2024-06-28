#include<stdio.h>
main()
{
	int i;
	char deta1[100], deta2[100] ,n[100];

	printf("•¶Žš—ñ1\n");
	scanf("%s", deta1);

	printf("•¶Žš—ñ2\n");
	scanf("%s", deta2);

	for (i = 0; deta1[i] != '\0'; i++)
	{
		n[i] = deta1[i];
	}
	n[i] = '\0';
	for (i = 0; deta2[i] != '\0'; i++)
	{
		 deta1[i] = deta2[i];
	}
	deta1[i] = '\0';
	for (i = 0; n[i] != '\0'; i++)
	{
		deta2 [i] = n[i];
	}
	deta2[i] = '\0';
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1=%s \nmoji2=%s\n",deta1,deta2 );
   
}