#include<stdio.h>
int main()
{
	int arr[10];
	int i,;
	int sum=0;
	float aver;
	int NO; 
	printf("����10���˵ĳɼ���");
	for(i=0;i<=9;i++)
	{
		NO=i+1;
		printf("\n��%d���� ",NO);
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
		printf("�ܷ���%d , ƽ���ɼ�%f��",sum,aver);
	 printf("\n�����ĳɼ�");
	 for(i=0;i<=9;i++)
	 {
 		printf("%d\t",arr[i]);
 	} 
 	return 0;
}