#include<stdio.h>
int main()
{
	void move(int arr[20],int m,int n);
	int arr[25];
	int n,i,m;
	printf("���뼸������");
	scanf("%d",&n);
    printf("ǰ���������ƶ���λ��");
	scanf("%d",&m);
	printf("��������������\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	move(arr,m,n);
	printf("����������飺");
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