#include<stdio.h>
int main()
{
	char a[]="T am a student.",b[10];
	for(int i=0;*(a+i)!='\0';i++)
	{
		*(b+i)=*(a+i);
		*(b+i+1)='\0';
	}
	printf("string a is:%s\n",a);
	printf("string b is:");
	for(int i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}