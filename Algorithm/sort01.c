#include<stdio.h>
main()
{
	int i,j,w;
	int d[] = { 30,7,25,16,10 };
	for (i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
		printf("%d\n", d[i]);
	}
}