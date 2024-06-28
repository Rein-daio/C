#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,t;
    srand(time(0));
	 rand();
	
	 printf("何を出しますか？　\n1＝グー、２＝チョキ、３＝パー");
		scanf("%d", &t);

	switch (t)
	{
	 case 1: 
		 printf("プレイヤーはグーです\n");
			break;
	 case 2:
		 printf("プレイヤーはチョキです\n");
		 break;
	 case 3:
		 printf("プレイヤーはパーです\n");
		 break;
	}
     k = rand()%3;
    switch (k)
	{
	 case 0: 
		 printf("コンピュータはグーです\n\n");
			break;
	 case 1:
		 printf("コンピュータはチョキです\n\n");
		 break;
	 case 2:
		 printf("コンピュータはパーです\n\n");
		 break;
	}
	switch (((t-1)-k+3)%3)
	{
	case 0:
		printf("あいこです\n");
		break;
	case 2:
		printf("プレイヤーの勝ちです\n");
		break;
	case 1:
		printf("コンピュータの勝ちです\n");
		break;
	}
	
	/*if (t == 1 && k == 0)
	{
		printf("あいこです\n");
	}
	if (t == 1 && k == 1)
	{
		printf("プレイヤーの勝ちです\n");
	}
	if (t == 1 && k == 2)
	{
		printf("コンピュータの勝ちです\n");
	}
	if (t == 2 && k == 1)
	{
		printf("あいこです\n");
	}
	if (t == 2 && k == 2)
	{
		printf("プレイヤーの勝ちです\n");
	}
	if (t == 2 && k == 0)
	{
		printf("コンピュータの勝ちです\n");
	}
	if (t == 3 && k == 2)
	{
		printf("あいこです\n");
	}
	if (t == 3 && k == 0)
	{
		printf("プレイヤーの勝ちです\n");
	}
	if (t == 3 && k == 1)
	{
		printf("コンピュータの勝ちです\n");
	}*/
}