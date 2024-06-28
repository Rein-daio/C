#include<stdio.h>


main()
{
	int h , l ,m,s;
	int deta[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("探索値を入力");
	scanf("%d", &s);
	l = 0;
	h = 10;
	while (l<=h)//最後まで、見つかるまで探す
	{
		m = (h + l) / 2;

		if (s == deta[m])//同じ
		{
			break;
		}
		if (s > deta[m])//最小値を増やす
		{
			l=m + 1;
		}
		if (s < deta[m])//最大値を減らす
		{
			h=m - 1;
		}
	}
	if (l>h)//見つけたか否か
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("%d番目に見つかった\n", m + 1);
	}


}