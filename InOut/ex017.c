#include <stdio.h>
main()
{
	float d1, d2, d3;
	printf("一つ目の実数");
	scanf("%f", &d1);
	printf("二つ目の実数");
	scanf("%f", &d2);
	printf("三つ目の実数");
	scanf("%f", &d3);
	printf("合計は%fです\n", d1 + d2 + d3);
	printf("平均は%fです\n", (d1 + d2 + d3) * 1/3);
}