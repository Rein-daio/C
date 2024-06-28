#include<stdio.h>
main()
{
	int p,t,w ;
	printf("1=+,2=-,3=*,4=/\n");
	printf("‰‰Zq‚ğ“ü—Í;");
	scanf("%d", &p);
	printf("2‚Â‚Ì®”‚ğ“ü—Í;");
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
		printf("ƒGƒ‰[");
	}
}