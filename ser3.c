#include<stdio.h>


main()
{
	int h , l ,m,s;
	int deta[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("�T���l�����");
	scanf("%d", &s);
	l = 0;
	h = 10;
	while (l<=h)//�Ō�܂ŁA������܂ŒT��
	{
		m = (h + l) / 2;

		if (s == deta[m])//����
		{
			break;
		}
		if (s > deta[m])//�ŏ��l�𑝂₷
		{
			l=m + 1;
		}
		if (s < deta[m])//�ő�l�����炷
		{
			h=m - 1;
		}
	}
	if (l>h)//���������ۂ�
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("%d�ԖڂɌ�������\n", m + 1);
	}


}