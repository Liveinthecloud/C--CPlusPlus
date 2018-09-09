#include<stdio.h>
int getPeachNumber(int n)
{
	int sum;
	if(n==1)
	{
		return 1;
	}
	else
		{
		     sum=getPeachNumber(n-1)+n;
		     printf("%d\n",sum);
		     return sum;
	     }
}
int main()
{
	int sum=getPeachNumber(10);
	printf("%d",sum);
	return 0;
}