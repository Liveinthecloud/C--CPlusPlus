#include<stdio.h>
#define N 3
struct Student
	{
		int num;
		char name[20];
		float score[3];
		float aver;
	};
int main()
{
	void input(struct Student a[]);
void prin(struct Student stud);
struct Student max(struct Student a[]);
	struct Student str[N],*p=str;
	printf("输入个学生的信息：学号，姓名，三门课成绩。\n");
	input(p);
	prin(max(p));
	return 0;
}

void input(struct Student a[])
{
	int i;
	for(i=0;i<N;i++)
	{
		scanf("%d%s%f%f%f",&a[i].num,&a[i].name,&a[i].score[0],&a[i].score[1],&a[i].score[2]);
		a[i].aver=(a[i].score[0]+a[i].score[1]+a[i].score[2])/3;
	}
}

struct Student max(struct Student a[])
{
	int i;
	int n=0;
	for(i=0;i<N;i++)
	{
		if(a[i].aver>a[n].aver)
		{
			n=i;
		}
	}
	return (a[n]);
}

void prin(struct Student stud)
{
	printf("\n平均成绩最好的同学是：\n");
	printf("学号:%d\n姓名:%s\n三科的成绩:%3.1f  %3.1f%  3.1f\n平均成绩:%3.2f\n",stud.num,stud.name,stud.score[0],
	stud.score[1],stud.score[2],stud.aver);
}