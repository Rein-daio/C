#include<stdio.h>
main()
{
	int p,t,w ;
	printf("1=+,2=-,3=*,4=/\n");
	printf("演算子を入力;");
	scanf("%d", &p);
	printf("2つの整数を入力;");
	scanf("%d%d", &t,&w);
	if (p ==1) {
		printf("%d\n", t+w);
	}
	else if (p == 2) {
		printf("%d\n", t - w);
	}
	else if (p == 3) {
		printf("%d\n", t * w);
	}
	else if (p == 4) {
		printf("%d\n", t / w);
	}
	else if(p<4 || p>0) 
	{
		printf("エラー");
	}
}