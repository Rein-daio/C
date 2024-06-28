#include<stdio.h>
main()
{
	int t, k, g;

	printf("•b”‚ğ“ü—Í;");
	scanf("%d", &t);
	if (t <= 5000) {

		k = t / 3600;
		t = t % 3600;
		g = t / 60;
		t = t % 60;
		printf("%dŠÔ%d•ª%d•b", k,g ,t );
	}
	else {
		printf("ƒGƒ‰[");
	}
}