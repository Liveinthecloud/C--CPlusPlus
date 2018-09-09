#include<stdio.h>
int main()
{
	int length(char *p);
	int len;
	char arr[100];
	printf("input character:");
	scanf("%s",arr);
	len=length(arr);
	printf("The length of string is %d.\n",len);
	return 0;
}

int length(char *p)
{
	int i=0;
	while(*p!='\0')
	{
		p++;
		i++;
	}
	return i;
}