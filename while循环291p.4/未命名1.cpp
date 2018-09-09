#include<stdio.h>
int main()
{
	int i,arr[50],n;
	int *p;
	printf("\ninput number of person:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
	}
	i=0;
	int k=0;
	int m=0;
	while(m<n-1)
	{
		if(arr[i]!=0)
		{
			k++;
		}
		if(k==3)
		{
			arr[i]=0;
			k=0;
			m++;
		}
		i++;
		if(i==n)
		{
			i=0;
		}
	}
	p=arr;
	while(*p==0)
	{
		p++;
	}
	printf("The last one is NO.%d\n",*p);
	return 0;
}