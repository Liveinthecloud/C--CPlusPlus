#include<stdio.h>
#include<string>
int main()
{
	void sort(char *m[]);
	int i;
	char *a[]={"Follow me","BASIC","Great Wall"};
	sort(a);
	for(i=0;i<3;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}

void sort(char *m[])
{
	char *pt;
	if(strcmp(m[0],m[1])>0)
	{
		pt=m[0];
		m[0]=m[1];
		m[1]=pt;
	}
		if(strcmp(m[0],m[2])>0)
	{
		pt=m[0];
		m[0]=m[2];
		m[2]=pt;
	}
		if(strcmp(m[1],m[2])>0)
	{
		pt=m[1];
		m[1]=m[2];
		m[2]=pt;
	}

}
