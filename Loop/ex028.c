#include <stdio.h>
main()
{
	int g , a;
	g = 0;
	printf("数を入れて");
		scanf("%d", &a);
		while (a != -999) {
			g += a;
			printf("数を入れて");
			scanf("%d", &a);
	    }
		printf("合計=%d\n", g);
}