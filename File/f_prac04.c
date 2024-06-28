#include<stdio.h>
#define S_NUM 3
typedef struct
{
	char Wname[20];
	int bullet;
	float atk;
}weapon;
typedef struct
{
	char name[20];
	int hp;
	weapon wpn;
}Soldier;

void SetInfo(Soldier* s, char* filename);
void Display(Soldier *s);

main()
{
	Soldier sols[S_NUM];
	SetInfo(sols, "file04.txt");
	Display(sols);

}
void SetInfo(Soldier* s, char* filename)
{
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r"))
	{
      for(i=0;i<S_NUM;i++)
	  {
		fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s+i)->hp, (s+i)->wpn.Wname, &(s+i)->wpn.bullet, &(s+i)->wpn.atk);
	  }
	
	 fclose(fp);
	}
	
}
void Display(Soldier *s) 
{
	int i;
	for(i = 0; i < S_NUM;i++ )
	{
	 printf("%s‘Ì—Í:%d\n", (s+i)->name, (s+i)->hp);
	 printf("•ŠíF%s’e”:%dUŒ‚—Í:%.2f\n", (s+i)->wpn.Wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);
	}
	
}