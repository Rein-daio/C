#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k,t;
    srand(time(0));
	 rand();
	
	 printf("�����o���܂����H�@\n1���O�[�A�Q���`���L�A�R���p�[");
		scanf("%d", &t);

	switch (t)
	{
	 case 1: 
		 printf("�v���C���[�̓O�[�ł�\n");
			break;
	 case 2:
		 printf("�v���C���[�̓`���L�ł�\n");
		 break;
	 case 3:
		 printf("�v���C���[�̓p�[�ł�\n");
		 break;
	}
     k = rand()%3;
    switch (k)
	{
	 case 0: 
		 printf("�R���s���[�^�̓O�[�ł�\n\n");
			break;
	 case 1:
		 printf("�R���s���[�^�̓`���L�ł�\n\n");
		 break;
	 case 2:
		 printf("�R���s���[�^�̓p�[�ł�\n\n");
		 break;
	}
	switch (((t-1)-k+3)%3)
	{
	case 0:
		printf("�������ł�\n");
		break;
	case 2:
		printf("�v���C���[�̏����ł�\n");
		break;
	case 1:
		printf("�R���s���[�^�̏����ł�\n");
		break;
	}
	
	/*if (t == 1 && k == 0)
	{
		printf("�������ł�\n");
	}
	if (t == 1 && k == 1)
	{
		printf("�v���C���[�̏����ł�\n");
	}
	if (t == 1 && k == 2)
	{
		printf("�R���s���[�^�̏����ł�\n");
	}
	if (t == 2 && k == 1)
	{
		printf("�������ł�\n");
	}
	if (t == 2 && k == 2)
	{
		printf("�v���C���[�̏����ł�\n");
	}
	if (t == 2 && k == 0)
	{
		printf("�R���s���[�^�̏����ł�\n");
	}
	if (t == 3 && k == 2)
	{
		printf("�������ł�\n");
	}
	if (t == 3 && k == 0)
	{
		printf("�v���C���[�̏����ł�\n");
	}
	if (t == 3 && k == 1)
	{
		printf("�R���s���[�^�̏����ł�\n");
	}*/
}