#include<stdio.h>
main()
{
	FILE* fp;
	char name[256], equip;
	int i=0;
	
	printf("プレイヤー名");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア%d(Enter=+1,e=終了)\n", i);
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