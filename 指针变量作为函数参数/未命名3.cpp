#include<stdio.h>
int main()
{
	void swap(int *x,int *y);
	int a=5;
	int b=9;
	int *m,*n;
	m=&a;
	n=&b;
	if(a<b)
	{
		swap(m,n);
	}
	printf("%d,%d\n",a,b);
		return 0;
}
void swap(int *x,int *y)
{
		int temp;
		temp=*x;
		*x=*y;
		*y=temp; 
}