#include <stdio.h>
main()
{
	int a=0,b ;
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
		  } while (b < 5);
		    printf("\n");
			a--;
		  
	}while (a != 0); 
	  
}