#include<stdio.h>
int main()
{
	struct Sudent
	{
		int number;
		char name[10];
		float score;
	}stu[5]={1000,"Zeng",90,1001,"Wang",75,1002,"Zhang",94,1003,"Li",73,1004,"Xi",88};
	struct Sudent tamp;
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(stu[i].score<stu[j].score)
			{
				tamp=stu[i];
				stu[i]=stu[j];
				stu[j]=tamp;
			}
		}
	}
	for(i=0;i<5;i++)
	    printf("%6d   %8s   %6.2f\n",stu[i].number,stu[i].name,stu[i].score);
	    return 0;
}