#include<stdio.h>
int main()
{
	int year;
	int month;
	int day;
	int s,sum;
	printf("输入:年 月 日 ");
	scanf("%d%d%d",&year,&month,&day);
	switch(month)
	{
		case 1:sum=0;break;
		case 2:sum=31;break;
		case 3:sum=59;break;
		case 4:sum=90;break;
		case 5:sum=120;break;
		case 6:sum=151;break;
		case 7:sum=181;break;
		case 8:sum=212;break;
		case 9:sum=243;break;
		case 10:sum=273;break;
		case 11:sum=304;break;
		case 12:sum=334;break;
	}
	sum+=day;
	if(year%400==0||(year%4==00&&year%100!=0))
	  s=1;
	  else
	  s=0;
	  if(s==1&&month>2)
		sum++;
	
	printf("%d年%d月%d天是这一年的第%d天。\n",year,month,day,sum);
	return 0;
}