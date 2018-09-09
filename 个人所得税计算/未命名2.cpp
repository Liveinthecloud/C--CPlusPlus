#include<stdio.h>
#include<stdlib.h>
#define SIZE 9
typedef struct tax_st
{
	long left;
	long right;
	int tax;
	long deduct;
}FROM;

void disp(FROM tax_st1[])
{
	double salary,s,tax,ff;
	int i;
	printf("输入税前扣除数：");
	scanf("%lf",&ff);
	printf("请输入月收入：");
	scanf("%lf",&salary);
	if(salary>0)
	{
		s=salary-ff;
		if(s<=0)
		{
			tax=0;
		}
		else{
			for(i=0;i<9;i++)
			{
				if(s>tax_st1[i].left&&s<=tax_st1[i].right)
				{
					tax=s*tax_st1[i].tax/100-tax_st1[i].deduct;
				}
			}
		}
	}
	printf("应缴纳个人所得税：%.2lf\n",tax);
}

int main()
{
	FILE *fp;
	FROM tax_sti[SIZE];
	if((fp=fopen("TAX.din","rb"))==NULL)
	{
		printf("\nCan't open file\n");
		exit(1);
	}
	if(fread(tax_sti,sizeof(FROM),SIZE,fp)!=SIZE)
	{
		printf("file write error\n");
		exit(1);
	}
	disp(tax_sti);
	fclose(fp);
	return 0;
}