#include<stdio.h>
main()
{
	int t, k, g;

	printf("�b�������;");
	scanf("%d", &t);
	 if (t < 0) {
			printf("�}�C�i�X�̓G���[�ł�\n");
	}
	else if (t <= 5000) {

		k = t / 3600;
		t = t % 3600;
		g = t / 60;
		t = t % 60;
		printf("%d����%d��%d�b", k, g, t);
	}
	else {
		printf("�G���[");
	}
}