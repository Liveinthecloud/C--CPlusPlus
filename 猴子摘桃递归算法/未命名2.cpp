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
		printf("��%d����ʣ����%d��\n",n,num);
		return num;
	}
}
int main()
{
	
	int num=getPeachNumber(1);
	printf("���ӵ�һ��ժ��%d����",num);
	return 0;
}