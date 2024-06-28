#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;

	srand(time(0));
	rand();
	k = rand()%6+1;
	printf("%d‚Å‚·\n", k);
}