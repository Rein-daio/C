#include <stdio.h>
main()
{
	int a = 0, b = 0;
	
	
	while (1)
	{
		printf("����?\n");
	    scanf("%d", &a);
		if (a == -999)break;
		b += a;
	} 
	printf("���v=%d\n",b);
}