//1105028kadai021.c
#include<stdio.h>
main()
{
	int ia ,ib ;
	printf("2つの数値?");
	scanf("%d%d", &ia, &ib);
	printf("***25と3の四則演算***\n");
	printf("%d+%d=%d\n",ia,ib,ia+ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%dあまり%d\n", ia, ib, ia / ib,ia%ib);
}