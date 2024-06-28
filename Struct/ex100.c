#include<stdio.h>
struct menyu
{
	char  name[999];
	struct menyu* next;
};
main()
{
	int i, p=1,a;
	struct menyu memo[] = {"NULL"};
	struct menyu* x, * z;
	while(1)
	{
		z = x = memo;
		printf("メニュー 1=表示　2=追加　3=削除　9=終了");
		scanf("%d", &a);
		switch (a)
		{
		    case 1:
			{
				for (i = 0; i > p; i++) 
				{
					printf("%s\n",memo[i]);
				}
				
		    }
		    case 2:
			{
				printf("追加");
				scanf("%s", memo[p]);
				p++;
		    }
		    case 3:
			{
				memo[p].next = &memo[p+2];
		    }
			case 9:
			{
				break;
		    }
		}

	}
	
}