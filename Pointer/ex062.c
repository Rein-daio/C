#include<stdio.h>
main()
{
	char d[10] = "banana";
	char d2[10] ;
	char * p_d;
	char* p = "peach";
	char * p_d2;
	p_d = d;
	p_d2 = d2;
	
	while (*p_d2++=*p_d++);

	p_d = d;
	while (*p_d++=*p++);
	
	printf("data1[]=%s\n",d);
	printf("data2[]=%s\n",d2);
}