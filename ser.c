#include<stdio.h>


main()
{
	int i=0,s=0;
	int deta[10]={ 10,5,30,77,16,3,47,29,37,33 };
	printf("�T���l�����");
	scanf("%d", &s);
	for (i = 0; i < 10; i++) 
	{
		if (deta[i] == s);
		{
			break;
		}
		
	}
	if (i >=10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		 printf("%d�ԖڂɌ�������\n", i+1);
	}
		

}