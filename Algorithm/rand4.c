#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,t;

	srand(time(0));
	rand();
	k = rand(0)%5+1;
	printf("今日のあなたの運勢は");
	for (t = 0; t < k;t++)
	{
		printf("★ ");
	}
	printf("です\n");
}