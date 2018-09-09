#include<stdio.h>
int main()
{
	struct Student
	{
		int num;
		char name[20];
		char sex;
		int age;
	};
	int i;
	struct Student *p;
	struct Student stu[3]={10101,"Li Lin",'M',18,
	                       10102,"Zhang Fang",'M',19,
                           10104,"Wang Min",'F',20};
     p=stu;
     for(i=0;i<3;i++,p++)
     {
     	printf("%-15d %-10s%10c%10d\n",p->num,p->name,p->sex,p->age);
     }
     return 0;
}