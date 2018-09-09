#include<stdio.h> 
int main()
{
	void move(int *pt);
	int arr[3][3];
	int i,*p,*p1;
	printf("input number:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
	}
	p1=&arr[0][0];
	move(p1);
	printf("output number:\n");
	p=p1;
	for(i=0;i<3;i++)
	{
		printf("%d %d %d\n",arr[i][0],arr[i][1],arr[i][2]);
	}
	return 0;	
}

void move(int *pt)
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			temp=*(pt+3*i+j);
			*(pt+3*i+j)=*(pt+3*j+i);
			*(pt+3*j+i)=temp;
		}
	}
}
