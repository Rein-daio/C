#include<stdio.h>
main()
{
	int  n=0, v=0 ,u=0 ;
	do
	{
		printf("”‚Í ?");
		scanf("%d", &n);
		u += n;

		v++;

	}while (n != -999);

	printf("‡Œv=%d•½‹Ï=%.2f\n", u+999 , (float)(u+999)/(v-1));
}/*printf("”‚Í?");
	scanf("%d",&n);
	for (u = 0, v = 0; n != -999; v++)
	{
		 u +=n ;
		printf("”‚Í ?");
		scanf("%d",&n);
		
	}*/