#include<stdio.h>
void sisoku(int x,int y,int *wa,int *sa,int *sk,int *syo);
main()
{
	int a,b,c,d,e,f;
	printf("deta?");
	scanf("%d", &a);
	printf("deta?");
	scanf("%d", &b);
	sisoku(a,b,&c,&d,&e,&f);
	printf("”’l‚Æ”’l‚Ìl‘¥‰‰Z");
	printf("wa=%d sa=%d sk=%d syo=%d",c,d,e,f);
	return 0;
}
void sisoku(int x, int y, int* wa, int* sa, int *sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
	return;
}