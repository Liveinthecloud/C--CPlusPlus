#include<stdio.h>
int Year(int n)
{
	if(n==1)
	{
		return 10;
	}
	else{
		int m;
		m=Year(n-1)+2;
		printf("��%d�����%d\n",n,m);
		return m;
	}
}
int main()
{
  Year(5);
	return 0;    
}