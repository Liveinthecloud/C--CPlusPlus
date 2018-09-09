#include<stdio.h>
int main()
{
	void  copy_string(char *from,char *p);
	char *a="I am a student";
	char *b="I am a teacher";
	printf("string a:%s\nstring b:%s\n",a,b);
	copy_string(a,b);
	printf("string a:%s\nstring b:%s\n",a,b);
	return 0;
}

void copy_string(char *from,char *p)
{
	for(;*from!='\0';from++,p++)
	{
		*p=*from;
	}
	*p='\0';
}