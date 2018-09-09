#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define SIZE 9
typedef struct tax_st
{
	long left;
	long right;
	int tax;
	long deduct;
} FORM;
void acceptdata(FORM tax_list[])
{
	int i;
	printf("Enter data.\n");
	for(i=0;i<SIZE;i++)
	{
		scanf("%ld%ld%d%ld",&tax_list[i].left,&tax_list[i].right,
		&tax_list[i].tax,&tax_list[i].deduct);
	}
}
int main()
{
	FILE *fp;
	FORM tax[SIZE];
	if((fp=fopen("TAX.txt","wb"))==NULL)
	{
		printf("\nCan't open file.\n");
		exit(0);
	}
	acceptdata(tax);
	if(fwrite(tax,sizeof(FORM),SIZE,fp)!=SIZE)
	{
		printf("file write error.\n");
	}
	fclose(fp);
	return 0;
}