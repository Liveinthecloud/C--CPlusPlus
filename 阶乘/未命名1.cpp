#include<stdio.h>
int main()
{
	double i,t,j,sum=0;
	for(i=1;i<=20;i++)
	{
		t=1;
		for(j=1;j<=i;j++)
		{
			t=t*j;
			sum+=t;
		}
	}
	printf("\n%e\n",sum);
	return 0;
}