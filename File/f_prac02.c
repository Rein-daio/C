#include<stdio.h>
main()
{
	FILE* fp;
	char max_name[256], name[256], equip;
	int max_i,i=0;
	
	fp = fopen("score.txt", "r");

	fscanf(fp, "%s%d", max_name, &max_i);
	fclose(fp);
	printf("ハイスコア%d ネーム%s", max_i, max_name);

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
	if(i>max_i)
	fp = fopen("score.txt", "w");
	fprintf(fp,"%s\n%d\n",name ,i);
	fclose(fp);
}