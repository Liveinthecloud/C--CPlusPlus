#include<stdio.h>
#define Number 1000
int main()
{
	int even[Number]={0},sum=0,i,k=0;
	for ( i=1;;i++)
	{
		if (i % 2 == 0)
		{
			even[k++]=i;
			sum++;
		}
		if (sum==Number)
		{
			break;
		}
	}
	for (i = 0; i < Number; i++)
		printf("%d  ", even[i]);
	return 0;

}