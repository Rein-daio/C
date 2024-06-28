#include<stdio.h>
#define M_N 3
#define W 10
#define H 5

typedef struct
{
	int m_map[H][W];
}Map;
void SMap(char* filename, Map* m);
void DMap(Map m);
main()
{
	Map MDate;
	int S;
	char* MFN[M_N]
		= { "map0.txt","map1.txt","map2.txt" };
	printf("表示するマップ？(0,1,2)");
	scanf("%d", &S);
	SMap(MFN[S], &MDate);
	DMap(MDate);
}
void SMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename ,"r"))
	{
		for (i = 0; i < H;i++)
		{
			for (j = 0; j < W;j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
	
	
}
void DMap(Map m)
{
	int i, j;
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				if(m.m_map[i][j]==1)
				{
					printf("ロ");
				}
				if(m.m_map[i][j]==0)
				{
					printf("　");
				}
			}
			printf("\n");
		}
}