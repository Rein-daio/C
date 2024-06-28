#include<stdio.h>
#define DC 8
main()
{
	int i,j,w,g;
	int d[DC] = { 70,64,80,53,40,26,30,18 }; 
	g= DC / 2;
	while (g>0) 
	{
	 for (i = g; i < DC; i++)
	 {
		for (j = i-g ; j >=0; j--)
		{
			if (d[j+g] < d[j])
			{
				w = d[j];
				d[j] =d[j+g] ;
				d[j+g] = w;
			}
		}
		
	 }
	 g = g / 2;
	}
	for(i=0;i<DC;i++)
	{
	printf("%d\n", d[i]);
	}
}