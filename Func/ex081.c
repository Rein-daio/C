#include<stdio.h>
int mex(int *a,int s);
int min(int *a,int s);
main()
{
	int d[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d", mex(d,8));
	printf("Å­’l=%d", min(d,8));
}

int mex(int* a, int s) 
{
int mex, i;
mex = *a;
  for (i = 0; i < s; i++) 
  {
	  if (mex < *(a + i)) 
	  {
		  mex = *(a + i);
	  }
  }
  return (mex);
}
int min(int* a, int s) 
{
int min, i;
min = *a;
  for (i = 0; i < s; i++) 
  {
	  if (min > *(a + i)) 
	  {
		  min = *(a + i);
	  }
  }
  return (min);
}
