#include<stdio.h>
int main()
{
	int upper=0,lower=0,digit=0,space=0,other=0;
	char arr[50],*p;
	int i=0;
	printf("input string:\n");
	while((arr[i]=getchar())!='\n')
	{
		i++;
	}
	p=arr;
	while(*p!='\n')
	{
		if(('A'<=*p)&&(('Z')>=*p))
		{
			upper++;
		}
		else if(('a'<=*p)&&(('z')>=*p))
		{
			lower++;
		}
		else if(*p=='  ')
		{
			space++;
		}
		else if((*p>='0')&&(*p<='9'))
		{
			digit++;
		}
		else 
		{
			other++;
		}
		p++;
	}
	printf("upper case:%d   lower case:%d   space:%d  digit:%d   other:%d\n",
	upper,lower,space,digit,other);
	return 0;
}