#include <stdio.h>
main()
{
	float d1, d2, d3;
	printf("��ڂ̎���");
	scanf("%f", &d1);
	printf("��ڂ̎���");
	scanf("%f", &d2);
	printf("�O�ڂ̎���");
	scanf("%f", &d3);
	printf("���v��%f�ł�\n", d1 + d2 + d3);
	printf("���ς�%f�ł�\n", (d1 + d2 + d3) * 1/3);
}