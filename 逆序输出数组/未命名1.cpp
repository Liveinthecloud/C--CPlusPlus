#include<stdio.h>
int main()
{
	void reverse(int *p,int n);
	int arr[20];
	int i,n,*p;
	printf("输入几个数："); 
	scanf("%d",&n);
	printf("\ninput %d number:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=arr;
	reverse(p,n-1);
	printf("\n");
	return 0;
}

void reverse(int *pt,int n)
{
	int i;
	for(i=n;i>=0;i--)
	{
		printf("%d  ",*(pt+i));
	}
}