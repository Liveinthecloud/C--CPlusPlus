#include<stdio.h>
int main()
{
	float a[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float (*pointer)[4],int n);
	int i,n;
	float *p;
	printf("enter the number of student:");
	scanf("%d",&n);
	printf("The scores ofNo.%d are:\n",n);
	p=search(a,n);
	for(i=0;i<4;i++)
	{
		printf("%5.1f",*p);
		p++;
	}
	printf("\n");
	return 0;
}

float *search(float (*pointer)[4],int n)
{
	float *pt;
	pt=*(pointer+n-1);
	return pt;
}