#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch,filemane[10];
	printf("�������õ��ļ�����");
	scanf("%s",filemane);
	if((fp=fopen(filemane,"w"))==NULL)
	{
		printf("�޷��򿪴��ļ�\n");
		exit(0);
	}
	ch=getchar();
	printf("����һ��׼���洢�����̵��ַ�������#������:");
	ch=getchar();
	while(ch!='#')
	{
		fputc(ch,fp);
		putchar(ch);
		ch=getchar();
	}
	fclose(fp);
	putchar(10);
	return 0;
}