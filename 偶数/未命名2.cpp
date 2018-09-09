#include<stdio.h>
int main()
{
	int i,even[100]={0};
	for(i=1;i<=100;i++)
	{
		even[i-1]=2*i;
	}
	for(i=0;i<100;i++)
	{
		printf("%d  ",even[i]);
	}
	return 0;
} 