#include<stdio.h>
int main()
{
	int an[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i,j;
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j||2==i+j)
		{
			sum+=an[i][j];
		    printf("%d\t",an[i][j]);
		}
		}
	}
	printf("%d\n",sum);
	return 0;
}