#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i=0,w=0,t=0;
	int deta[20];
	srand(time(0));
	for (i = 0; i < 20; i++) 
	{
		deta[i] = i + 1;
	}
	i = 0;
		while ( i < 20 )
		{
			t = rand () % 20;
			 w=deta[i];
			deta[i] = deta[t];
			deta[t]=w;
			i++;
		}
		for (i = 0; i < 20; i++)
		{
			printf("%d\n", deta[i]);
		}

}