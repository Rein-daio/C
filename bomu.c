#include <stdio.h>
main()
{
	int a;
	int box = 12;
	int exit = 0;

	do {
		printf("数を入れて");
		scanf("%d", &a);
		if (a == box)
		{ 
			exit = 1;
		}
		printf("exit=%d\n" , exit );
	} while (exit == 0);
	printf("アウト\n");



	//printf("数を入れて");
	//	scanf("%d", &a);
	//		while (a != box&& a <=30) 
	//		{
	//			printf("数を入れて");
	//			scanf("%d", &a);
	//		}
 //       
}	