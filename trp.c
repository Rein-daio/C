#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k=0,s=0,p=0,v=0,l=0;
	printf("���[�h�I���@�O��NPC 1=�ΐl");
	scanf("%d", &p);

	if (p == 0) {
		printf("��������");
		scanf("%d", &s);
		srand(time(0));
	rand();
	k = rand() % 13+1;
	if (s > 13)
	 {
     printf("�s���ɂ�肠�Ȃ��̕����ł�\n");
	 }
	  if(s<k )
	  { 
	   if(s <3 && k > 10) 
	   {
        printf("%d��%d�Ȃ̂ł��Ȃ��̏����ł�\n", s, k);
	   }
	   else 
	   {
        printf("%d��%d�Ȃ̂ł��Ȃ��̕����ł�\n", s,k);
	   }
		 
	  }
	
		
	 if (s > k)
	 {
	     if(k <3 && s > 10) 
		 {
          printf("%d��%d�Ȃ̂ł��Ȃ��̕����ł�\n", s, k);
	     }
		 else 
		 {
         printf("%d��%d�Ȃ̂ł��Ȃ��̏����ł�\n", s, k);
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
		  printf("%d���\n", l);
		
		printf("1P��������");
	    scanf("%d", &v);
		if (v > k)
		{
			printf("��������傫��\n" );
		}
		if (v < k)
		{
			printf("�������菬����\n");
		} 
		if (v == k)
		{
			printf("%d�Ȃ̂�1P�̏����ł�\n", k);
			break;
		} 
		printf("2P��������");
		scanf("%d", &s);
		if (s > k)
		{
			printf("��������傫��\n");
		}
		if (s <k)
		{
			printf("�������菬����\n");
		}
		 if(s==k)
		 {
			printf("%d�Ȃ̂�2P�̏����ł�\n", k);
			break;
		 }
		
	
	  } while (v != k || s != k);
	   
		

	}
	
	return 0;
	
}