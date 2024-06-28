#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k = 100, s = 100, p = 0, v = 100, l1,l2,r1,r2,dam,ty1=0,ty2=0;
	printf("モード選択　０＝NPC 1=対人");
	scanf("%d", &p);

	if (p == 0)
	{
		while (1) 
		{
		srand(time(0));
		rand();
		printf("1Pのターン\n1アタック\n２チャージ\n３ヒール\n");
		scanf("%d", &l1);
		 switch (l1)
		 {
		 case 1:
			
			dam = rand() % 30 + 10;
			printf("\n%dのダメージ\n",  dam + ty1);
			k -= dam + ty1;
			break;
		 case 2:
			dam = rand() % 30 + 20;
			ty1 += dam;
			printf("\n%dのチャージ\n", ty1);
			break;
		 case 3:
			r1 = rand() % 50 + 20;
			printf("\n%d回復\n", r1);
			s += r1;
			break;
		 }
		    if (k < 0)
			{
				printf("1Pの勝ちです\n");
				break;
			}

			srand(time(0));
		    rand();
		    l2 = rand() % 3 + 1;
			printf("2Pのターン\n1アタック\n２チャージ\n３ヒール\n");
			printf("%d", l2);
			switch (l2)
			{
			case 1:
				dam = rand() % 30 + 10;
				printf("\n%dのダメージ\n",  dam + ty2);
				s -= dam + ty2;
				break;
			case 2:
				dam = rand() % 30 + 20;
				ty2 += dam;
				printf("\n%dのチャージ\n", ty2);
				break;
			case 3:
				r2 = rand() % 50 + 20;
				printf("\n%d回復\n", r2);
				k += r2;
				break;
			}
			if (s < 0)
			{
				printf("CPの勝ちです\n");
				break;
			}
         }
	}
	if (p == 1)
	{
		while (1)
		{
		 printf("1Pのターン\n1アタック\n２チャージ\n３ヒール\n");
		 scanf("%d", &l1);
		 
		 switch (l1)
		 {
		 case 1:
			dam = rand() % 20 + 10;
			printf("\n%dのダメージ\n",  dam + ty1);
			v -= dam + ty1;
			break;
		 case 2:
			dam = rand() % 30 + 20;
			ty1 += dam;
			printf("\n%dのチャージ\n", ty1);
			break;
		 case 3:
			r1 = rand() % 50 + 20;
			printf("\n%d回復\n", r1);
			s += r1;
			break; 
		 }
		    if (v < 0)
			{
				printf("1Pの勝ちです\n");
				break;
			}
			printf("2Pのターン\n1アタック\n２チャージ\n３ヒール\n");
		    scanf("%d", &l2);
			switch (l2)
			{
			case 1:
				dam = rand() % 20 + 10;
				printf("\n%dのダメージ\n", dam + ty2);
				s -= dam + ty2;
				break;
			case 2:
				dam = rand() % 30 + 20;
				ty2 += dam;
				printf("\n%dのチャージ\n", ty2);
				break;
			case 3:
				r2 = rand() % 50 + 20;
				printf("\n%d回復\n", r2);
				v += r2;
				break;
			}
			if (s < 0)
			{
				printf("2Pの勝ちです\n"); 
				break;
			}
         }
	}
}