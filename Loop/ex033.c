#include<stdio.h>
main()
{
	int  n=0, v=0 ,u=0 ;
	do
	{
		printf("���� ?");
		scanf("%d", &n);
		u += n;

		v++;

	}while (n != -999);

	printf("���v=%d����=%.2f\n", u+999 , (float)(u+999)/(v-1));
}/*printf("����?");
	scanf("%d",&n);
	for (u = 0, v = 0; n != -999; v++)
	{
		 u +=n ;
		printf("���� ?");
		scanf("%d",&n);
		
	}*/