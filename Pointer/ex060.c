#include<stdio.h>
main()
{
	int i=0,j=0;
	char a,d[15] = "C Language";
	char *p_d;
	p_d = d;
	printf("deta[]=%s\n", p_d);
	printf("検証文字は？");
	scanf("%c", &a);
	printf("検証結果は");
	while( *(p_d+i) )
	{
		if (a == *(p_d+i)) 
		{
			printf(" %d ", i+1);
			j++;
		}
		i++;
	}
	if (j > 0) 
	{
		printf("文字目です");
	}
	else 
	{
		printf("ありません");
	}
	
}