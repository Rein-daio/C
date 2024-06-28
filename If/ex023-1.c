#include<stdio.h>
main()
{
	int t, k, g;

	printf("秒数を入力;");
	scanf("%d", &t);
	 if (t < 0) {
			printf("マイナスはエラーです\n");
	}
	else if (t <= 5000) {

		k = t / 3600;
		t = t % 3600;
		g = t / 60;
		t = t % 60;
		printf("%d時間%d分%d秒", k, g, t);
	}
	else {
		printf("エラー");
	}
}