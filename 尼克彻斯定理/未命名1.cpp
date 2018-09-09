#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("number:");
	scanf("%d",&a);
	b=a*a*a;
	printf("%d*%d*%d=%d=",a,a,a,b);
	for(d=0,c=0;c<a;c++)
	{
		d+=(a*a-a+1)+2*c;
		if(c==a-1)
		{
			printf("%d",(a*a-a+1)+2*c);
			break;
		}
		printf("%d+",(a*a-a+1)+2*c);
	}
	return 0;
	
}