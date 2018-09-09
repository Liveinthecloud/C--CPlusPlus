#include<stdio.h>
int main()
{
	void fun(int x,int y,int (*p)(int ,int));
	int max(int,int);
	int min(int,int);
	int add(int,int);
	int a=34;
	int b=-21,n;
	printf("please choose1,2or3:");
	scanf("%d",&n);
	if(n==1)
	{
		fun(a,b,max);
	}
	if(n==2)
	{
		fun(a,b,min);
	}
	if(n==3)
	{
		fun(a,b,add);
	}
	return 0;
}

int max(int a,int b)
{
	int z;
	if(a>b)
	   z=a;
     else 
        z=b;
        printf("max=");
     return z;
}

int min(int a,int b)
{
	int z;
	if(a>b) z=b;
	else z=a;
	printf("min=");
	return z;
}

int add(int a,int b)
{
	int z;
	z=a+b;
	printf("sum=");
	return z;
}

void fun(int x,int y,int (*p)(int ,int))
{
	printf("%d\n",(*p)(x,y));
}