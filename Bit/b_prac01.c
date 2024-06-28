#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
typedef struct 
{
	char name[20];
	int hp;
	int mp;
	int akt;
	int def;
	UINT MYS;
}Chara;
typedef struct 
{
	char name[20];
	int hp;
	int mp;
	int akt;
	int def;
	UINT S;
}Mob;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);
int DM(void);
main()
{
	Chara chara = { "��l��",30,15,5,1,Ba };
	Mob mob[3] = { {"a",25,4,1,Ba},{"b",6,11,0,Ba},{"c",35,2,4,Ba} };
	srand(time(0));
}
int DM(void)
{
	char ch;
	printf("�R�}���h�H\n");
	printf("1:����\n2:�h��\n");
	ch = getch();
}
void DisplayStatus(UINT s)
{
	printf("**���݂̏��**\n");
	if (s & Po) 
	{
		printf("�ǂ�\n");
	}
	if (s & Sl) 
	{
		printf("����\n");
	}
	if (s & Pa) 
	{
		printf("���\n");
	}
	if (s & Bu) 
	{
		printf("�Ώ�\n");
	}
	if (s & AU) 
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AD) 
	{
		printf("�U���̓_�E��\n");
	}
	printf("*************\n");
}
void ChangeFlag(UINT* s)
{
	int a;
	while(1)
	{
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃɂ��܂���?\n");
	    printf("1:�ǂ� 2:����  3:���  4:�Ώ�  5:�U����U  6:�U����D�@0�ŏI��");
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
		printf("�ǂ̏�Ԃ��񕜂��܂���?\n");
		printf("1:�ǂ� 2:����  3:���  4:�Ώ�  5:�U����U  6:�U����D�@7:�S���@�@0�ŏI��");
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