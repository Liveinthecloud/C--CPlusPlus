#include<stdio.h>
#include<math.h>
int Perimeter(int a,int b ,int c)
{
	if((a+b)<=c || (a+c)<=b || (b+c)<=a)
	{
		printf("������������");
		return 0;
	}
	else 
	{
		int sum;
	sum=a+b+c;
	return sum;
	}
}
float Area(int a,int b,int c)
{
	if((a+b)<=c || (a+c)<=b || (b+c)<=a)
	{
		printf("������������");
		return 0;
	}
	else 
	{
		float p;
		float S;
		p=(a+b+c)/2;
		S=sqrt(p*(p-a)*(p-b)*(p-c));
		return S;
	}
	
} 
int main()
{
	int a,b,c,;
	printf("����������");
	scanf("%d%d%d",&a,&b,&c);
	printf("�ܳ�=%d\    ���=%f\n",Perimeter(a,b,c),Area(a,b,c));	
	return 0; 
}