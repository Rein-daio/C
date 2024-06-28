#include <stdio.h>
main()
{
	int no;
	printf("整数を入力");
	scanf("%d", &no);
	if (no%2==1) {
		printf("その数は「奇数です」\n");
	}
	else {
		printf("その数は「偶数です」\n");
	}
}