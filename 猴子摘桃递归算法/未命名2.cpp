#include<stdio.h>
int getPeachNumber(int n)
{
	if(n==10)
	{
		return 1;
	}
	else{
		int num; 
		int day=10;
		num=(getPeachNumber(n+1)+1)*2;
		printf("第%d天所剩挑子%d个\n",n,num);
		return num;
	}
}
int main()
{
	
	int num=getPeachNumber(1);
	printf("猴子第一天摘了%d个。",num);
	return 0;
}