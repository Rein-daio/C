#include<stdio.h>
enum BS 
{
	Ba=0,   //00000000
	Po=1<<0,//00000001
	Sl=1<<1,//00000010
	Pa=1<<2,//00000100
	Bu=1<<3,//00001000
	AU=1<<4,//00010000
	AD=1<<5 //00100000
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
main()
{
	UINT MyState = Ba;
		
	ChangeFlag(&MyState);
	ClearFlag(&MyState);
	
}
void DisplayStatus(UINT s)
{
	printf("**現在の状態**\n");
	if (s & Po) 
	{
		printf("どく\n");
	}
	if (s & Sl) 
	{
		printf("睡眠\n");
	}
	if (s & Pa) 
	{
		printf("麻痺\n");
	}
	if (s & Bu) 
	{
		printf("火傷\n");
	}
	if (s & AU) 
	{
		printf("攻撃力アップ\n");
	}
	if (s & AD) 
	{
		printf("攻撃力ダウン\n");
	}
	printf("*************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while(1)
	{
		DisplayStatus(*s);
		printf("どの状態にしますか?\n");
	    printf("1:どく 2:睡眠  3:麻痺  4:火傷  5:攻撃力U  6:攻撃力D　0で終了");
	    scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		 case 1:
		 {
			*s |= Po;
			 break;

		 }
		 case 2:
		 {
			 *s |= Sl;
			 break;

		 }
		 case 3:
		 {
			 *s |= Pa;
			 break;

		 }
		 case 4:
		 {
			 *s |= Bu;
			 break;

		 }
		 case 5:
		 {
			 *s |= AU;
			 break;

		 }
		 case 6:
		 {
			 *s |= AD;
			 break;

		 }

			
		}

	}
	
}
void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を回復しますか?\n");
		printf("1:どく 2:睡眠  3:麻痺  4:火傷  5:攻撃力U  6:攻撃力D　7:全部　　0で終了");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		 case 1:
		 {
			*s &= ~Po;
			break;

		 }
		 case 2:
		 {
			*s &= ~Sl;
			break;

		 }
		 case 3:
		 {
			*s &= ~Pa;
			break;

		 }
		 case 4:
		 {
			*s &= ~Bu;
			break;

		 }
		 case 5:
		 {
			*s &= ~AU;
			break;

		 }
		 case 6:
		 {
			*s &= ~AD;
			break;

		 }
		 case 7:
		 {
			*s &= Ba;
			break;

		 }


		}

	}
}