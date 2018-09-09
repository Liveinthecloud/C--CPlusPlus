#include<stdio.h>
#include<string>
#include<math.h>
#define SIZE 300

typedef struct Student
{
	int num;
	int score[3];
} STU;

typedef enum boolen
{
	False,True
}FLAG;

int main()
{
	void count(int *max,int *min,double*pass,double aver[],double f[],STU str[],int sum);
	void show_data(int max,int min,double pass,double ave[],double f[]);
    int accep_data(STU str[],int grade[]);
	void Pri(STU str[],int grade[],int sum);
	STU str[SIZE];
	int grade[11]={0};
	int max,min,sum;
	double pass;
	double aver[SIZE],f[SIZE];
	sum=accep_data(str,grade);
	Pri(str,grade,sum);
	count(&max,&min,&pass,aver,f,str,sum);
	show_data(max,min,pass,aver,f);
	return 0;
	
}

int accep_data(STU str[],int grade[])
{
	int i=0,sum=0,temp,a1,a2;
	FLAG flag;
	printf("\n输入计算总评成绩时使用平时成绩与期末成绩的比例，用整数表示。");
	scanf("%d%d",&a1,&a2);
	while(i<SIZE)
	{
		printf("\n输入学号:");
		scanf("%d",&str[i].num);
		if(str[i].num==1)
		{
			sum=i;
			break;
		}
		printf("\n输入平时成绩和期末成绩:");
		flag=True;
		while(flag==True)
		{
			scanf("%d%d",&str[i].score[0],&str[i].score[1]);
			if((str[i].score[0]>=0&&str[i].score[0]<=100)&&(str[i].score[1]>=0&&str[i].score[1]<=100))
				flag=False;
			else
				printf("\n输入错误重新输入！\n");
		}
		temp=(int)(1.0*str[i].score[0]*a1/100+1.0*str[i].score[1]*a2/100);
		str[i].score[2]=temp;
		temp=str[i].score[2]/10;
		if(temp==10)
		{
			grade[10]++;
		}
		else
		{
			grade[temp+1]++;
		}
		i++;
	}
	return sum; 
}

void Pri(STU str[],int grade[],int sum)
{
	int i;
	printf("\n输出学生信息.\n");
	for(i=0;i<sum;i++)
	{
		printf("%4d%4d%4d%4d\n",str[i].num,str[i].score[0],str[i].score[1],str[i].score[2]);
	}
	for(i=1;i<=10;i++)
	{
		printf("%4d",grade[i]);
	}
}

void count(int *max,int *min,double*pass,double aver[],double f[],STU str[],int sum)
{
	int i,j,p_sum=0;
	int total[3];
	double temp;
	*max=*min=str[0].score[1];
	for(i=0;i<sum;i++)
	{
		if(str[i].score[1]>*max)
		{
			*max=str[i].score[1];
		}
		if(str[i].score[1]<*min)
		{
			*min=str[i].score[1];
		}
		if(str[i].score[1]>=60)
		{
			p_sum++;
		}
	}
	*pass=(1.0*p_sum/sum)*100;
	for(i=0;i<3;i++)
	{
		total[i]=0;
		for(j=0;j<sum;j++)
		{
			total[i]+=str[j].score[i];
		}
		aver[i]=total[i]/sum;
	}
	for(i=0;i<3;i++)
	{
		f[i]=0;
		for(j=0;j<sum;j++)
		{
			temp=str[j].score[i]-aver[i];
			f[i]+=temp*temp;
		}
		f[i]=sqrt(f[i]/sum);
	}
} 

void show_data(int max,int min,double pass,double ave[],double f[])
{
	int i,j;
	printf("\n及格率=%6.2f%%     最高分=%d        最低分=%d",pass,max,min);
	for(i=0;i<3;i++)
	{
		if(i==0)
		{
			printf("\n平时成绩平均=%.2f      平时成绩标准差=%.2f\n",ave[i],f[i]);
		}
		if(i==1)
		{
			printf("期末成绩平均=%.2f      期末成绩标准差=%.2f\n",ave[i],f[i]);
		}
		if(i==2)
		{
			printf("总评成绩平均=%.2f      总评成绩标准差=%.2f\n",ave[i],f[i]);
		} 
	}
}