#include <stdio.h>
main()
{
	int a;
	int box = 12;
	int exit = 0;

	do {
		printf("��������");
		scanf("%d", &a);
		if (a == box)
		{ 
			exit = 1;
		}
		printf("exit=%d\n" , exit );
	} while (exit == 0);
	printf("�A�E�g\n");



	//printf("��������");
	//	scanf("%d", &a);
	//		while (a != box&& a <=30) 
	//		{
	//			printf("��������");
	//			scanf("%d", &a);
	//		}
 //       
}	