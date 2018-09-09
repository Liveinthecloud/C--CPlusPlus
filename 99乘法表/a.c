#include<stdio.h>
int main()
{
	
	int i,j,result;
	for(j=9;j>=1;j--)
	{
		
	for(i=1;i<=j;i++)
	{
		printf("%d*%d=%d\t",j,i,result=j*i);
		
	}
	printf("\n");
	}
	return 0;
}