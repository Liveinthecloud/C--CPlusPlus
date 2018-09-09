#include<stdio.h>
int main()
{
	void aver(float *p,int n);
	void search(float (*p)[4],int n);
	float a[3][4]={65,67,70,60,80,87,90,81,90,99,100,98};
	aver(*a,12);
	search(a,2);
	printf("\n");
	return 0;
	
}
void aver(float *p,int n)
{
	int i;
	float sum=0,aver;
	for(i=0;i<n;i++)
	{
		sum+=*p;
		p++;
	}
	aver=sum/n;
	printf("aver=%5.2f\n",aver);
}

void search(float (*p)[4],int n)
{
	printf("The score of No.%d are:\n",n);
	for(int i=0;i<4;i++)
	{
		printf("%5.2f  ",*(*(p+n)+i));
	}
}