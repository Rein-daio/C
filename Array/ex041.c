#include<stdio.h>
main()
{
	int i ;
	float n= 0, box[3];
	for (i = 0; i < 3; i++) 
	{
        printf("���������\n");
		scanf("%f", &box[i]);
		n += box[i];
		
	}
		printf("���v%.2f\n", n);
		printf("����%.2f\n", n/3);
}