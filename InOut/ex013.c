#include<stdio.h>
main()
{
	char su;
	su = '1';
	printf("su:%c \n",su);
	printf("数値に変換:%d \n",su-'0');
	/*文字１−０＝1 ,49-48=1
	文字は０から9まで連続している*/
}