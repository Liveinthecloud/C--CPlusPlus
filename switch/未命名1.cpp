#include "stdio.h"
int  main()
{
	int x,y,temp;
	printf("������������\n");
	scanf("%d%d",&x,&y);
	printf("����������� 1 \n");
	printf("������������ 2 \n");
	printf("����������� 3 \n");
	printf("����������� 4 \n");
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
		default: printf("�������\n"); 
	}
	return 0;
}
