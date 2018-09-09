#include<stdio.h>
int main()
{
	struct Stduent
	{
		int num;
		char name[20];
		float score;
	}stduent1,stduent2;
	printf("input stduent:\n");
	scanf("%d%s%f",&stduent1.num,&stduent1.name,&stduent1.score);
	scanf("%d%s%f",&stduent2.num,&stduent2.name,&stduent2.score);
	printf("The higher score is:\n");
	if(stduent1.score>stduent2.score)
	{
		printf("%d   %s   %5.2f\n",stduent1.num,stduent1.name,stduent1.score);
	}
	else if(stduent1.score<stduent2.score)
	{
		printf("%d   %s   %5.2f\n",stduent2.num,stduent2.name,stduent2.score);
	}
	else 
	{
		printf("%d   %s   %5.2f\n",stduent1.num,stduent1.name,stduent1.score);
		printf("%d   %s   %5.2f\n",stduent2.num,stduent2.name,stduent2.score);
	}
	return 0;
}