#include<stdio.h>
#define B_S 4
main()
{
	int a[] = { 11,22,33,44,55,66 },i;
	int *p_a,i_t;
	float b[B_S] = { 11.1,22.2,33.3,44.4 };
	float *p_b,g_t;
	
	for (i = 0, i_t = 0, p_a = a; i < sizeof a/sizeof(int); i++,p_a++)
	{
		i_t += *p_a ;
	}
	printf("配列a 合計=%7d\t平均=%6.3f\n", i_t, (float)i_t /( sizeof a/sizeof(int)));
	for (i = 0, g_t = 0, p_b = b; i < B_S; i++, p_b++)
	{
		g_t += *p_b;
	}
	printf("配列b 合計=%7.3f\t平均=%6.3f\n", g_t, g_t / B_S);

}