#include<stdio.h>
void fn()
{
	static int x=1;//static ��̬�ֲ����� 
	x*=2;
	printf("x=%d\n",x);
}
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		fn();
	}
	extern int x;//�ⲿ���� 
	printf("x=%d\n",x);
	return 0;
}
int x=100;