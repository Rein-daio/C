#include<stdio.h>
main()
{
	int a ;
	char n ;
	printf("10�i���̐����H");
	scanf("%d", &a);
   
	printf("�A���t�@�x�b�g(o or h or d)?");
	scanf("%*c%c", &n);

	switch (n){
	case 'o':
	case 'O':
		{
			printf("%o", a);
			break;
	    }
	case 'h':
	case 'H':
		{
			printf("%o", a);
			break;
		}
		default:
		printf("%d", a);
	}
}
