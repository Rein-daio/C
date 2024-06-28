#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,t;

	srand(time(0));
	rand();
	k = rand(0)%5+1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	for (t = 0; t < k;t++)
	{
		printf("š ");
	}
	printf("‚Å‚·\n");
}