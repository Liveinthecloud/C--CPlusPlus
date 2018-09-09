#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define N 9  //假设选手人数不超过9
typedef struct node
{
int  num;      //编号
char name[20];//姓名
int  sum;      //票数
}
info[N+1];
info*p;
int numbers;    //总共的选手人数
FILE*fp;
void tianjia()
{
int i=1,n;
char a[10],b[10];
p=(info*)malloc(sizeof(info));
if((fp=fopen("xuanshou.txt","r"))!=NULL)
{
fscanf(fp,"%d%s\n",&p[i]->num,p[i]->name);
i++;
fclose(fp);
printf("读取文件记录成功!\n");
}
else
{
printf("不存在记录文件，请输入选手的数量:\n");
scanf("%d",&n);getchar();
numbers=n;
printf("请输入%d名选手的编号和姓名:\n",n);
while(n--)
{
scanf("%d%s",&p[i]->num,p[i]->name);
getchar();
i++;
}
printf("输入完成!\n");
}
printf("选手信息如下:\n");
printf("编号姓名\n");
for(i=1;i<=numbers;i++)
printf("%d%s\n",p[i]->num,p[i]->name);
}
void toupiao()
{
int i,n;
for(i=1;i<=numbers;i++)
p[i]->sum=0;
printf("投票开始啦!\n");
printf("请观众通过按键进行投票，按'1'为1号选手投票");
printf("按'2'为2号选手投票，以此类推，以按'0'作为投票结束标记\n");printf("投票现在正式开始:\n");
while(1)
{
scanf("%d",&n);getchar();
if(n==0)
break;
while(n<1||n>numbers)
{
printf("不存在此号码，请重新输入:");
scanf("%d",&n);
}
p[n]->sum++;
}
printf("投票完成!\n");
printf("投票情况如下:\n");
printf("编号姓名票数\n");
for(i=1;i<=numbers;i++)
printf("%d   %s    %d\n",p[i]->num,p[i]->name,p[i]->sum);
}
             //希尔排序
void shellinsert(info*R,int n,int dk)
{
	int i,j;
for(i=dk+1;i<=n;i++)
{
if(R[i]->sum>R[i-dk]->sum)
{      //小于时，需R[i]将插入有序表
   
	*R[0]=*R[i];    //存储待插入的记录
  for(j=i-dk;j>0&&R[j]->sum<R[0]->sum;j=j-dk)
    *R[j+dk]=*R[j];//记录后移
    *R[j+dk]=*R[0];//插入到正确位置
}
}
}
void shellsort(info*R,int n)
{
int i;int mm=1;
int t[10]={21,19,17,13,11,7,5,3,2,1};    //步长因子中除1外没有公因子，且最后一个步长因子必须为1
for(i=0;i<10;i++)
shellinsert(R,n,t[i]);                 //调用每个步长因子
printf("最终排名如下:\n");
printf("名次  编号   姓名   票数\n");
for(i=1;i<=numbers;i++)
{
if(i>=2&&p[i]->sum<p[i-1]->sum)
mm++;
printf("%d%d%s%d\n",mm,p[i]->num,p[i]->name,p[i]->sum);
}
}
void menu()
{
printf("************************电视大赛观众投票及排名系统***************************\n\n\n");
printf("1添加选手信息\n2投票\n3排序\n4退出\n");
}
int main()
{
char n;
while(1)
{
menu();
printf("\n请输入您要选择的操作序号，按回车键确认：");
scanf("%c",&n);getchar();
while(n<'1'||n>'4')
{
printf("输入有误，请重新输入:");
scanf("%c",&n);
getchar();
}
switch(n-48)
{
case1:tianjia();break;
case2:toupiao();break;
case3:shellsort(p,numbers);system("pause");break;
case4:printf("谢谢使用，再见!");exit(0);
}
}
}
