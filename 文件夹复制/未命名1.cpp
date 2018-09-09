#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *in,*out;
	char ch,infile[10],outfile[10];
	printf("输入文件的名字:");
	scanf("%s",infile);
	printf("输入文件的名字:");
	scanf("%s",outfile);
	if((in=fopen(infile,"r"))==NULL)
	{
		printf("1打开失败！\n");
		exit(0); 
	}
	if((out=fopen(outfile,"w"))==NULL)
	{
		printf("2打开失败！\n");
		exit(0); 
	}
	while(!feof(in))
	{
		ch=fgetc(in);
		fputc(ch,out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
}