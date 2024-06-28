#include<stdio.h>
main()
{
	int a=0;
	while (a != -1)
	{
		printf("文字コード（－１で終了）\n");
		scanf("%d", &a);
		printf("\n%c\n", a);
	}
}