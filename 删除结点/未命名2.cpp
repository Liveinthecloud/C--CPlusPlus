#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(Person)
typedef struct Student
{
	long int num;
	char name[10];
	char sex;
	int year;
	struct Student *next;
}Person;

int main()
{
	void  prin(Person *p);
	void fre(Person *up);
	Person *creat(void);
	Person *pt,*up;
	int m;
	printf("enter years:");
	scanf("%d",&m);
	pt=creat();
	prin(pt);
	while(pt->next!=NULL)
	{
		if(pt->year==m)
		{
			fre(up);
		}
		up=pt;
		pt=pt->next;
	}
	prin(pt);
	return 0;
}

Person *creat(void)
{
	Person *p1,*p2,*head;
	printf("输入信息学号，姓名，年龄\nNo.1   "); 
	p1=p2=(Person*)malloc(LEN);
	scanf("%ld%s%c%d",&p1->num,&p1->name,&p1->sex,&p1->year);
	head=NULL;
	int n=0,m=1;
	while(p1->num!=0)
	{
		n+=1;
		if(n==1)
		{
			head=p1;
		}
		else
		{
			++m;
			printf("No.%d   ",m);
			p2->next=p1;
		p2=p1;
		p1=(Person*)malloc(LEN);
		scanf("%ld%s%c%d",&p1->num,&p1->name,&p1->sex,&p1->year);
		}
	}
	p2->next=NULL;
	return (head);
}

void fre(Person *up)
{
	up->next=up->next->next;
}

void  prin(Person *p)
{
	do
	{
		printf("%ld %s  %d\n",p->num,p->name,p->year);
		p=p->next;
	}while(p->next!=NULL);
}