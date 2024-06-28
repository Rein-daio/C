#include <stdio.h>
main()
{
	int a=0,b=0,x=1 ,y ,z=0 ;
	char moji = '*';
	printf("”‚Í?");
		scanf("%d", &a);
	do  
	{ 
		y = a;
		

		  b = 0;
		  do
		  {
			
			  printf(" ");
			  y--;
		  } while (y > z);
		  z++;
		  do
		  {
			
			  printf("*"  );
            b++;
		  } while (b < x);
		    printf("\n");
			x++;
		  
	}while ( b<a); 
	  
}