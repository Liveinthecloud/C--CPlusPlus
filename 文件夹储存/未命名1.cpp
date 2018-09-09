#include<stdio.h>   //c程序设计第四版 342p 例题。 
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char str[3][10],temp[10];
	printf("Enter string:\n");
	int i,j;
	for(i=0;i<3;i++)
	{
		scanf("%s",&str[i]);
	}
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(str[i],str[j])<0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	if((fp=fopen("C:\\Users\\Administrator\\Desktop\\string.txt","w"))==NULL)
	{
		printf("can't open file!\n");
		exit(0);
	}
	printf("\nThe new suquence:\n");
	for(i=0;i<3;i++)
	{
		fputs(str[i],fp);
		fputs("\n",fp);
		printf("%s\n",str[i]);
	}
	fclose(fp);
	return 0;
}