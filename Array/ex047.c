#include<stdio.h>
main()
{
	int i ,c;

	float gokei,x[3][2] ;
	for(c=0;c<3;c++)
	{
	 for (gokei = 0, i = 0; i <= 1; i++)
	 {
		printf("x[%d][%d]=",c, i, x[c][i]);
		scanf("%f" , &x[c][i]);
		printf("\n");
		gokei += x[c][i];
	 }
	printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",c, gokei/2);
	}

}	
	



/*for (gokei = 0, i = 0; i <= 1; i++) {
		printf("x[%d][%d]=%.1f\n",c, i, x[c][i]);
		gokei += x[c][i];
	}
	printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",c, gokei/2);
	c++;
	for (gokei = 0, i = 0; i <= 1; i++) {
		printf("x[%d][%d]=%.1f\n",c, i, x[2][i]);
		gokei += x[c][i];
	}
	printf("%ds–Ú‚Ì•½‹Ï=%.2f\n",c, gokei / 2);*/
