#include<stdio.h>
main()
{
	int a=0,b=0,n = 0;
	char l;
	printf("処理を入力");
	scanf("%c",&l );
	printf("整数を入力");
	scanf("%d%d%d", &a,&b ,&n);
	switch (l )
	{
	case 'd':
		if (a > b) 
		{
			if (a > n)
			{
            printf("最大値は%dです",a);
			}
			else
			{
				printf("最大値は%dです", n);
			}
		}
		else
		{
			if (b > n)

			{
				printf("最大値は%dです", b);
			}
			else
			{
				printf("最大値は%dです", n);
			}

		}
		break;

	case 's':
		if (a < b)
		{
			if (a < n)
			{
				printf("最少値は%dです", a);
			}
			else
			{
				printf("最少値は%dです", n);
			}
		}
		else
		{
			if (b < n)

			{
				printf("最少値は%dです", b);
			}
			else
			{
				printf("最少値は%dです", n);
			}
		}
		break; 
		

	case 'g':
		printf("合計は%dです", a + b + n);
		break;

	case 'h':
		printf("平均は%dです",(a+b+n)/3);
		break;

	default:
		printf("エラー");
	}
}