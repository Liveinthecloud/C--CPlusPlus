#include<stdio.h>
int main()
{
	void search(int (*p)[4],int n);
	int score[3][4]={65,57,80,60,58,87,90,81,90,99,100,98};
	search(score,3);
	return 0;
}

void search(int (*p)[4],int n)
{
	for(int i=0;i<n;i++)
	{
		int m;
		m=i;
		for(int j=0;j<4;j++)
		{
			if(*(*(p+i)+j)<60)
			{
			    for(int i=0;i<4;i++)
			    {
    				printf("%d  ",*(*(p+m)+i));
    			}
    			printf("\n");
			}
		}
	}
}