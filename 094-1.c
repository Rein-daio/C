#include<stdio.h>
#include<string.h>
#define B_S 5
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day birth ;
	char blood[5];
};

main()
{
	struct profile  fil[B_S] = { {"ax",{2000,3,1},"A"},
								 {"bx",{2000,4,1},"A"},
								 {"cx",{2000,2,21},"A"},
								 {"dx",{2000,6,1},"A"},
								 {"ex",{2000,2,12},"A"} ,};
	struct profile* p=fil;
	int i;
	
	for (i = 0; i < B_S; i++)
	{

		if(p->birth.tuki==2)
		{
			printf("%s--", p->name);
			printf("%4d”N%2dŒŽ%2d“ú¶",p->birth.nen, p->birth.tuki, p->birth.hi );
			printf("@ŒŒ‰tŒ^-%sŒ^\n", p->blood);
		}
		p++;
	}

}