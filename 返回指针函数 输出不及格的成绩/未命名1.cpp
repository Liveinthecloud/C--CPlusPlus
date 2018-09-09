#include<stdio.h>
int main()
{
	float *p;
	float a[][4]={60,80,80,90,56,89,67,88,34,78,90,66};
	float *search(float (*per)[4]);
	for(int i=0;i<3;i++)
	{
		p=search(a+i);
		if(p==*(a+i))
		{
			printf("No.%d score:",i);
			for(int i=0;i<4;i++)
			{
				printf("%5.1f",*(p+i));
			}
			printf("\n");
		}
		
	}
	return 0;
}

float *search(float (*per)[4])
{
	float *pt;
	pt=NULL;
	for(int i=0;i<4;i++)
	{
		if(*(*per+i)<60)
		pt=*per;
	}
	return pt;
}