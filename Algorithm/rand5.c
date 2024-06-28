#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,t,g;
	for (g = 0; g < 10; g++)
	{

		for (t = 0; t < 10; t++)
		{
			srand(time(0));
			rand();
			k = rand(0) % 300 + 1;
			printf("%4d", k);

		}
		printf("\n");
	}
}