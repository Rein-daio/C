#include<stdio.h>
main()
{
	FILE* fp;
	char name[256], equip;
	int i=0;
	
	printf("�v���C���[��");
	scanf("%s", name);
	while (1)
	{
		printf("���݂̃X�R�A%d(Enter=+1,e=�I��)\n", i);
		equip = getch();
		if (equip == 'e' || equip == 'E')
		{
			break;
		}
		i++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp,"%s\n%d\n",name ,i);
	fclose(fp);
}