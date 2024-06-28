#include <stdio.h>
main()
{
	int a=0,b=0,x=1 ;
	char moji = '*';
	printf("êîÇÕ?");
		scanf("%d", &a);
	do  
	{
		  b = 0;
		   
		  do
		  {
			
			  printf("*"  );
            b++;
		  } while (b < x);
		    printf("\n");
			x++;
		  
	}while ( b<a); 
	  
}