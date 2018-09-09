#include<stdio.h>
int main()
{
	void move(int arr[20],int m,int n);
	int arr[25];
	int n,i,m;
	printf("输入几个数：");
	scanf("%d",&n);
    printf("前面个数向后移多少位：");
	scanf("%d",&m);
	printf("向数组输入整数\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	move(arr,m,n);
	printf("交换后的数组：");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0; 
}

void move(int arr[20],int m,int n)
{
	int *p,arr_end;
	arr_end=*(arr+n-1);
	for(p=arr+n-1;p>arr;p--)
	{
		*p=*(p-1);
	}
	*arr=arr_end;
	m--;
	if(m>0)
	{
		move(arr,m,n);
	}
}