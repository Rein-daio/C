#include<stdio.h>
main()
{
	char moji;
	
	printf("文字を入力");
	
	scanf("%c", &moji);
	
	if (moji >= 0x61 && moji <= 0x7A) 
	{
		printf("変換すると%c", moji - 32);
	}
	       else if  (moji >= 0x41 && moji <= 0x6A)
	            {
		          printf("変換すると%c", moji + 32);
	             }
	else
	{
		printf("エラー");
	}
}