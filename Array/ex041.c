#include<stdio.h>
main()
{
	int i ;
	float n= 0, box[3];
	for (i = 0; i < 3; i++) 
	{
        printf("ŽÀ”‚ð“ü—Í\n");
		scanf("%f", &box[i]);
		n += box[i];
		
	}
		printf("‡Œv%.2f\n", n);
		printf("•½‹Ï%.2f\n", n/3);
}