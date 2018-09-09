#include<stdio.h>
int main()
{
	void sort(int *m);
	int x,y,z;
	int a[3];
	int *p;
	p=a;
	printf("enter the unmber:");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(p);
	p=a;
	for(int i=0;i<3;i++)
	{
		printf("%d ",*(p+i));
	}
	printf("\n");
	return 0;
}

void sort(int *m)
{
	void swap(int *p1,int *p2);
	int n;
	if(*m>*(m+1)) swap(m,m+1);
	if(*m>*(m+2)) swap(m,m+2);
	if(*(m+1)>*(m+2)) swap(m+1,m+2);
}

void swap(int *p1,int *p2)
{
	int n;
		n=*p1;
		*p1=*p2;
		*p2=n;
}