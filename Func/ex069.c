#include<stdio.h>
main()
{
	int c,k=0;//C=�߂�l
	int deta, g=0;

	printf("����");
	c = scanf("%d", &deta);
	while (c != EOF)
	{
		g+=deta;
		k++;
		printf("����");
		c = scanf("%d", &deta );
		
	}
	printf("���v%d\n",g);
	printf("����%.3f\n",(float)g/k );
}