#include<stdio.h>
main()
{
	int i ;
	float n= 0, box[3];
	for (i = 0; i < 3; i++) 
	{
        printf("実数を入力\n");
		scanf("%f", &box[i]);
		n += box[i];
		
	}
		printf("合計%.2f\n", n);
		printf("平均%.2f\n", n/3);
}