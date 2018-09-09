#include<stdio.h>
#include<string.h>
int main()
{
	struct Person
	{
		char name[20];
		int count;
	}leader[3]={"li",0,"wang",0,"zeng",0};
	char nameleader[20];
	int i,j;
	for(i=0;i<=9;i++)
	{
		scanf("%s",&nameleader);
		for(j=0;j<3;j++)
		{
		if(strcmp(nameleader,leader[j].name)==0)
		{
			leader[j].count++;
		}
		}
	}
	printf("Í¶Æ±½á¹û£º\n");
	for(i=0;i<3;i++)
	{
		printf("%s:%d\n",leader[i].name,leader[i].count);
	}
	return 0;
}