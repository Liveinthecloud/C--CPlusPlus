#include<stdio.h>
#include<string.h>
#include<malloc.h>
#define LEN sizeof(struct Student)
struct Student
{
	int num;
	float score;
	struct Student *next;
};
int n;
int main()
{
	struct Student *head;
	struct Student *input(void);
	void pri(struct Student *head);
	head=input();
	pri(head);
	
}

struct Student *input(void)
{
	struct Student *p1,*p2,*head;
	p2=p1=(struct Student*)malloc(LEN);
	scanf("%d%f",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0)
	{
		n+=1;
		if(n==1)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
			p2=p1;
			p1=(struct Student*)malloc(LEN);
			scanf("%d%f",&p1->num,&p1->score);
		}
	}
	p2->next=NULL;
	return head;
}

void pri(struct Student *head)
{
	struct Student *p;
	p=head;
	printf("\nNow,These%drecords are:\n",n);
	if(p!=NULL)
	{
		do
		{
			printf("%-5d   %5.2f\n",p->num,p->score);
			p=p->next;
		}while(p!=NULL);
	}
}
