#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k = 100, s = 100, p = 0, v = 100, l1,l2,r1,r2,dam,ty1=0,ty2=0;
	printf("���[�h�I���@�O��NPC 1=�ΐl");
	scanf("%d", &p);

	if (p == 0)
	{
		while (1) 
		{
		srand(time(0));
		rand();
		printf("1P�̃^�[��\n1�A�^�b�N\n�Q�`���[�W\n�R�q�[��\n");
		scanf("%d", &l1);
		 switch (l1)
		 {
		 case 1:
			
			dam = rand() % 30 + 10;
			printf("\n%d�̃_���[�W\n",  dam + ty1);
			k -= dam + ty1;
			break;
		 case 2:
			dam = rand() % 30 + 20;
			ty1 += dam;
			printf("\n%d�̃`���[�W\n", ty1);
			break;
		 case 3:
			r1 = rand() % 50 + 20;
			printf("\n%d��\n", r1);
			s += r1;
			break;
		 }
		    if (k < 0)
			{
				printf("1P�̏����ł�\n");
				break;
			}

			srand(time(0));
		    rand();
		    l2 = rand() % 3 + 1;
			printf("2P�̃^�[��\n1�A�^�b�N\n�Q�`���[�W\n�R�q�[��\n");
			printf("%d", l2);
			switch (l2)
			{
			case 1:
				dam = rand() % 30 + 10;
				printf("\n%d�̃_���[�W\n",  dam + ty2);
				s -= dam + ty2;
				break;
			case 2:
				dam = rand() % 30 + 20;
				ty2 += dam;
				printf("\n%d�̃`���[�W\n", ty2);
				break;
			case 3:
				r2 = rand() % 50 + 20;
				printf("\n%d��\n", r2);
				k += r2;
				break;
			}
			if (s < 0)
			{
				printf("CP�̏����ł�\n");
				break;
			}
         }
	}
	if (p == 1)
	{
		while (1)
		{
		 printf("1P�̃^�[��\n1�A�^�b�N\n�Q�`���[�W\n�R�q�[��\n");
		 scanf("%d", &l1);
		 
		 switch (l1)
		 {
		 case 1:
			dam = rand() % 20 + 10;
			printf("\n%d�̃_���[�W\n",  dam + ty1);
			v -= dam + ty1;
			break;
		 case 2:
			dam = rand() % 30 + 20;
			ty1 += dam;
			printf("\n%d�̃`���[�W\n", ty1);
			break;
		 case 3:
			r1 = rand() % 50 + 20;
			printf("\n%d��\n", r1);
			s += r1;
			break; 
		 }
		    if (v < 0)
			{
				printf("1P�̏����ł�\n");
				break;
			}
			printf("2P�̃^�[��\n1�A�^�b�N\n�Q�`���[�W\n�R�q�[��\n");
		    scanf("%d", &l2);
			switch (l2)
			{
			case 1:
				dam = rand() % 20 + 10;
				printf("\n%d�̃_���[�W\n", dam + ty2);
				s -= dam + ty2;
				break;
			case 2:
				dam = rand() % 30 + 20;
				ty2 += dam;
				printf("\n%d�̃`���[�W\n", ty2);
				break;
			case 3:
				r2 = rand() % 50 + 20;
				printf("\n%d��\n", r2);
				v += r2;
				break;
			}
			if (s < 0)
			{
				printf("2P�̏����ł�\n"); 
				break;
			}
         }
	}
}