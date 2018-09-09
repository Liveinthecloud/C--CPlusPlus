#include<stdio.h>
#include<string.h>
int main()
{
	void copystr(char *p1,char *p2,int n);
	char arr[100],arr1[100];
	int n;
	printf("input string:");
	scanf("%s",arr);
	printf("which character that begin to copy:");
	scanf("%d",&n);
	if(strlen(arr)<n)
	{
		printf("input error!");
	}
	else
	{
		copystr(arr,arr1,n);
	printf("%s\n",arr1);
	}
	return 0;
}

void copystr(char *p1,char *p2,int n)
{
	int i=0;
	while(*(p1+i+n-1)!='\0')
	{
		*(p2+i)=*(p1+n-1+i);
		i++;
	}
	*(p2+i)='\0';
	
} 