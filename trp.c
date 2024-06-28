#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k=0,s=0,p=0,v=0,l=0;
	printf("モード選択　０＝NPC 1=対人");
	scanf("%d", &p);

	if (p == 0) {
		printf("数を入れて");
		scanf("%d", &s);
		srand(time(0));
	rand();
	k = rand() % 13+1;
	if (s > 13)
	 {
     printf("不正によりあなたの負けです\n");
	 }
	  if(s<k )
	  { 
	   if(s <3 && k > 10) 
	   {
        printf("%dと%dなのであなたの勝ちです\n", s, k);
	   }
	   else 
	   {
        printf("%dと%dなのであなたの負けです\n", s,k);
	   }
		 
	  }
	
		
	 if (s > k)
	 {
	     if(k <3 && s > 10) 
		 {
          printf("%dと%dなのであなたの負けです\n", s, k);
	     }
		 else 
		 {
         printf("%dと%dなのであなたの勝ちです\n", s, k);
		 }
      		
	 }

	} 
	if(p==1)
	{
		srand(time(0));
	    rand();
		k = rand() % 1000+1;
      do 
	  {	
		  l++;
		  printf("%d回戦\n", l);
		
		printf("1P数を入れて");
	    scanf("%d", &v);
		if (v > k)
		{
			printf("当たりより大きい\n" );
		}
		if (v < k)
		{
			printf("当たりより小さい\n");
		} 
		if (v == k)
		{
			printf("%dなので1Pの勝ちです\n", k);
			break;
		} 
		printf("2P数を入れて");
		scanf("%d", &s);
		if (s > k)
		{
			printf("当たりより大きい\n");
		}
		if (s <k)
		{
			printf("当たりより小さい\n");
		}
		 if(s==k)
		 {
			printf("%dなので2Pの勝ちです\n", k);
			break;
		 }
		
	
	  } while (v != k || s != k);
	   
		

	}
	
	return 0;
	
}