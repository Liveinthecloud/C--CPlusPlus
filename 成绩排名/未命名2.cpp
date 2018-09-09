#include<stdio.h>
int main()
{
	int arr[10];
	int i,;
	int sum=0;
	float aver;
	int NO; 
	printf("输入10个人的成绩：");
	for(i=0;i<=9;i++)
	{
		NO=i+1;
		printf("\n第%d个人 ",NO);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=9;i++)
	{
		sum+=arr[i];
	}
	aver=sum/10;
	for(i=8;i>=0;i--)
	{
		for(int j=0;j<=9;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
		printf("总分数%d , 平均成绩%f。",sum,aver);
	 printf("\n排序后的成绩");
	 for(i=0;i<=9;i++)
	 {
 		printf("%d\t",arr[i]);
 	} 
 	return 0;
}