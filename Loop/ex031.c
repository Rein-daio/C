#include<stdio.h>
main()
{
	int t ,n ;
	for (t=0,n = 1; n <= 10; n++) 
	{
		t = t + n;
		printf("1から%dまでの和=%d\n", n , t);
		
	}

}