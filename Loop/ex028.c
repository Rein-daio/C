#include <stdio.h>
main()
{
	int g , a;
	g = 0;
	printf("��������");
		scanf("%d", &a);
		while (a != -999) {
			g += a;
			printf("��������");
			scanf("%d", &a);
	    }
		printf("���v=%d\n", g);
}