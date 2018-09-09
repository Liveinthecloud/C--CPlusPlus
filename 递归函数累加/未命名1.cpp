#include<stdio.h>
int getwordNumber(int n)
{
	int sum=0;
	if(n==0||n==1)
	{
		return 1;
	}
	else 
	{
	    sum=getwordNumber(n-1)+n;
	}
	return sum;
}
int main()
{
	int n;
	printf("输入记单词的天数：");
	scanf("%d",&n);
	getwordNumber (n);
	printf("总共记单词的个数：%d\n",getwordNumber(n));
	return  0; 
}