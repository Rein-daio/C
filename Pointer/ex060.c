#include<stdio.h>
main()
{
	int i=0,j=0;
	char a,d[15] = "C Language";
	char *p_d;
	p_d = d;
	printf("deta[]=%s\n", p_d);
	printf("���ؕ����́H");
	scanf("%c", &a);
	printf("���،��ʂ�");
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
		printf("�����ڂł�");
	}
	else 
	{
		printf("����܂���");
	}
	
}