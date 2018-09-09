#include<stdio.h>
int main()
{
	void input(int *unmber);
	void sort(int *arr);
	void output(int *unmber);
	int a[10];
	input(a);
	sort(a);
	output(a);
	return 0;
	
}
void input(int *number)
{
	printf("inout 10 numbers:");
	for(int i=0;i<=9;i++,number++)
	{
		scanf("%d",number);
	}
}

void sort(int *arr)
{
	int *p,*max,*min,temp;
	max=min=arr;
	for(p=arr+1;p<arr+10;p++)
	{
		if(*p>*max)
		max=p;
		else if(*p<*min)
		min=p;
	}
	temp=arr[0];
	arr[0]=*min;
	*min=temp;
	if(max==arr) 
	{
	max=min;
	}
	temp=arr[9];
	arr[9]=*max;
	*max=temp;
}

void output(int *number)
{
	int *p;
	printf("Now,they number:");
	for(p=number;p<number+10;p++)
	{
		printf("%d ",*p);
	}
	printf("\n");
}