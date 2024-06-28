#include<stdio.h>
#include<string.h>
void sort(int* a, int s,int str);
main()
{
	int d[8] = { 6,10,8,2,9,5,1,7 },i;
	int str;
	printf("‚O‚©1‚ğ“ü—Í‚O~‡‚P¸‡");
	scanf("%d", &str);
	sort(d, 8, str);
	for (i = 0; i < 8; i++) {
		printf("%d", d[i]);
	}
	
}

void sort(int* a, int s,int str)
{
	int i, j, w;
	if (str == 0)
	{
		for (i = 0; i < s - 1; i++) 
		{
			for (j = i + 1; j < s; j++)
			{
				if ( *(a + i) < *(a + j))
				{
					w = *(a + i);
					*(a + i) = *(a + j);
					*(a + j) = w;
				}
			}
		}
	}
	if (str == 1) 
	{
		for (i = 0; i < s - 1; i++) 
		{
			for (j = i + 1; j < s; j++)
			{
				if (*(a + i) > *(a + j))
				{
					w = *(a + j);
					*(a + j) = *(a + i);
					*(a + i) = w;
				}
			}
		}
	}
}