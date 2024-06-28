#include<stdio.h>
#include<string.h>
#define CNT 4
main() 
{
	int i,j;
	char* p_t[] = { "Programming2","Algorithm","Programming1","C" },*w;
	for (i = 0; i <CNT-1 ; i++) 
	{
	
		for (j= i + 1; j<CNT;j++ ) 
		{
			if (1==(strcmp (p_t[i] , p_t[j]))) 
			{
				w = p_t[i];
				p_t[i] = p_t[j];
				p_t[j] =w ;
			}
		}
	}
	
	for (i = 0; i <CNT; i++) 
	{
		printf("%s\n",p_t[i]);
	}
}