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
	printf("����ǵ��ʵ�������");
	scanf("%d",&n);
	getwordNumber (n);
	printf("�ܹ��ǵ��ʵĸ�����%d\n",getwordNumber(n));
	return  0; 
}