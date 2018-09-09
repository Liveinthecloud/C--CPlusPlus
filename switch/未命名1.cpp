#include "stdio.h"
int  main()
{
	int x,y,temp;
	printf("请输入俩个数\n");
	scanf("%d%d",&x,&y);
	printf("两数相加输入 1 \n");
	printf("两数做差输入 2 \n");
	printf("两数相乘输入 3 \n");
	printf("两数相除输入 4 \n");
    scanf("%d",&temp);
	switch(temp)
	{
	case 1:
		printf("%d+%d=%d\n",x,y,x+y);
		break;
	case 2:
		printf("%d-%d=%d\n",x,y,x-y);
		break;
	case 3:
		printf("%d*%d=%d\n",x,y,x*y);
		break;
	case 4:
		printf("%d/%d=%d\n",x,y,x/y);
		break;
		default: printf("输入错误！\n"); 
	}
	return 0;
}
