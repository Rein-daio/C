#include<stdio.h>
main()
{
	int a=0,b=0,n = 0;
	char l;
	printf("���������");
	scanf("%c",&l );
	printf("���������");
	scanf("%d%d%d", &a,&b ,&n);
	switch (l )
	{
	case 'd':
		if (a > b) 
		{
			if (a > n)
			{
            printf("�ő�l��%d�ł�",a);
			}
			else
			{
				printf("�ő�l��%d�ł�", n);
			}
		}
		else
		{
			if (b > n)

			{
				printf("�ő�l��%d�ł�", b);
			}
			else
			{
				printf("�ő�l��%d�ł�", n);
			}

		}
		break;

	case 's':
		if (a < b)
		{
			if (a < n)
			{
				printf("�ŏ��l��%d�ł�", a);
			}
			else
			{
				printf("�ŏ��l��%d�ł�", n);
			}
		}
		else
		{
			if (b < n)

			{
				printf("�ŏ��l��%d�ł�", b);
			}
			else
			{
				printf("�ŏ��l��%d�ł�", n);
			}
		}
		break; 
		

	case 'g':
		printf("���v��%d�ł�", a + b + n);
		break;

	case 'h':
		printf("���ς�%d�ł�",(a+b+n)/3);
		break;

	default:
		printf("�G���[");
	}
}