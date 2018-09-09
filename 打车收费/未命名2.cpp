#include<stdio.h>
int main()
{
	float price=2.3;
	float time;
	float journey;
	float money;
	printf("现在的时间，路程；");
	scanf("%f%f",&time,&journey);
	if(journey<=3)
	{
		money=14;
	}
	else if(time<=23&&time>5)
	{
		money=14+(journey-3)*2.3;
	}
	else
	{
		money=14+(journey-3)*2.3*1.2;
	}
	printf("打车费用；money=%5.2f\n",money);
	return 0;
}