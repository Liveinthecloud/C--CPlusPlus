#include<stdio.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
typedef struct Student
{
	char num[6];
	char name[10];
	char sex[2];
	int age;
	struct Student *next;
}Person;
int main()
{
	Person stu[10];
	Person *p,*pt,*head;
	int i,length,iage,flag=1;
	int  find=0;
	while(flag==1)
	{
		printf("input length of list(<10):");
		scanf("%d",&length);
		if(length<10)
		{
			flag=0;
		}
	}
//��������
for(i=0;i<length;i++)
{
	p=(Person *)malloc(LEN);
	if(i==0)
	{
		head=pt=p;
	}
	else 
	{
		pt->next=p;
	}
	pt=p;
	printf("NO.:");
	scanf("%s",p->num);
	printf("name:");
	scanf("%s",p->name);
	printf("sex:");
	scanf("%s",p->sex);
	printf("age:");
	scanf("%d",&p->age);
} 
p->next=NULL;
p=head;
printf("\nNO.name sex age \n");
while(p!=NULL)
{
	printf("%4s%8s%6s%6d\n",p->num,p->name,p->sex,p->age);
	p=p->next;
}
//ɾ�� 
printf("input age:");
scanf("%d",&iage);
pt=head;
p=pt;
if(pt->age==iage)
{
	p=pt->next;
	head=pt=p;
	find=1;
}
else
{
	pt=pt->next;
}
while(pt!=NULL)
{
	if(pt->age==iage)
	{
		p->next=pt->next;
		find=1;
	}
	else
	{
		p=pt;
		pt=pt->next;
	}
}
if(!find)
{
	printf("not found %d.",iage);
}
p=head;
while(p!=NULL)
{
	printf("%4s%8s%6s%6d\n",p->num,p->next,p->sex,p->age);
	p=p->next;
}
return 0;
}

