#include<stdio.h>
struct Student
{
	int num;
	float score;
	struct Student *next;
};
int main()
{
	struct Student a,b,c,*p,*head;
	head=&a;
	a.num=1000;a.score=90.5;a.next=&b;
	b.num=1001;b.score=88.0;b.next=&c;
	c.num=1002;c.score=96.2;c.next=NULL;
	p=head;
	do
	{
		printf("%-6d%6.2f\n",p->num,p->score);
		p=p->next;
	}while(p!=NULL);
	return 0;
}