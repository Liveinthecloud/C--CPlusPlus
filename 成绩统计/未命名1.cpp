#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color F8");
	float *search(float (*people)[5]);
	float average(float (*people)[5]);
	float *move(float (*people)[5]);
	void prin(float (*people)[5]);
	float score[4][5]={60,78,78,54,99,54,35,78,45,85,56,52,58,78,12,36,19,98,98,99};
	int i;
	float *p,*x,y;
	for(i=0;i<4;i++)
	{
		x=move(score+i);
		p=search(score+i);
		if(p==*(score+i))
		{
			printf("第%d个同学有两门上不及格\n",i+1);
			prin(score+i);
			y=average(score+i);
			printf("\n\n平均成绩=%.2f\n\n",y);
		}
		if(x==*(score+i))
		{
			printf("\n第%d个同学有三门成级超过90分.\n",i);
		}
	}
	system("pause");
	return 0;
	
}

float *search(float (*people)[5])
{
	float *pt;
	pt=NULL;
	int i,n=0;
	for(i=0;i<5;i++)
	{
		if(*(*people+i)<60)
		{
			n++;
		}
	}
	if(n>=2)
		{
			pt=*people;
		}
	return(pt);
}

float average(float (*people)[5])
{
	float sum=0,aver;
	for(int i=0;i<5;i++)
	{
		sum+=*(*people+i);
	}
	aver=sum/5;
	return aver;
}

float *move(float (*people)[5])
{
	int m=0;
	float *pt;
	pt=NULL;
	for(int i=0;i<5;i++)
	{
		if(*(*people+i)>=90)
		{
			m++;
		}
	}
	if(m>=3)
	{
		pt=*people;
	}
	return(pt);
}

void prin(float (*people)[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%.2f ",*(*people+i));
	}
}