#include<stdio.h>


main()
{
	int i=0,s=0;
	int deta[10]={ 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値を入力");
	scanf("%d", &s);
	deta[10]= s ;
	for (i = 0; i<10|| ; i++)
	{
		if (s == deta[i]) {
			break;
		 }
	}
	if (i >=10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("%d番目に見つかった\n", i + 1);
	}
		

}