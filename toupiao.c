#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define N 9  //����ѡ������������9
typedef struct node
{
int  num;      //���
char name[20];//����
int  sum;      //Ʊ��
}
info[N+1];
info*p;
int numbers;    //�ܹ���ѡ������
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
printf("��ȡ�ļ���¼�ɹ�!\n");
}
else
{
printf("�����ڼ�¼�ļ���������ѡ�ֵ�����:\n");
scanf("%d",&n);getchar();
numbers=n;
printf("������%d��ѡ�ֵı�ź�����:\n",n);
while(n--)
{
scanf("%d%s",&p[i]->num,p[i]->name);
getchar();
i++;
}
printf("�������!\n");
}
printf("ѡ����Ϣ����:\n");
printf("�������\n");
for(i=1;i<=numbers;i++)
printf("%d%s\n",p[i]->num,p[i]->name);
}
void toupiao()
{
int i,n;
for(i=1;i<=numbers;i++)
p[i]->sum=0;
printf("ͶƱ��ʼ��!\n");
printf("�����ͨ����������ͶƱ����'1'Ϊ1��ѡ��ͶƱ");
printf("��'2'Ϊ2��ѡ��ͶƱ���Դ����ƣ��԰�'0'��ΪͶƱ�������\n");printf("ͶƱ������ʽ��ʼ:\n");
while(1)
{
scanf("%d",&n);getchar();
if(n==0)
break;
while(n<1||n>numbers)
{
printf("�����ڴ˺��룬����������:");
scanf("%d",&n);
}
p[n]->sum++;
}
printf("ͶƱ���!\n");
printf("ͶƱ�������:\n");
printf("�������Ʊ��\n");
for(i=1;i<=numbers;i++)
printf("%d   %s    %d\n",p[i]->num,p[i]->name,p[i]->sum);
}
             //ϣ������
void shellinsert(info*R,int n,int dk)
{
	int i,j;
for(i=dk+1;i<=n;i++)
{
if(R[i]->sum>R[i-dk]->sum)
{      //С��ʱ����R[i]�����������
   
	*R[0]=*R[i];    //�洢������ļ�¼
  for(j=i-dk;j>0&&R[j]->sum<R[0]->sum;j=j-dk)
    *R[j+dk]=*R[j];//��¼����
    *R[j+dk]=*R[0];//���뵽��ȷλ��
}
}
}
void shellsort(info*R,int n)
{
int i;int mm=1;
int t[10]={21,19,17,13,11,7,5,3,2,1};    //���������г�1��û�й����ӣ������һ���������ӱ���Ϊ1
for(i=0;i<10;i++)
shellinsert(R,n,t[i]);                 //����ÿ����������
printf("������������:\n");
printf("����  ���   ����   Ʊ��\n");
for(i=1;i<=numbers;i++)
{
if(i>=2&&p[i]->sum<p[i-1]->sum)
mm++;
printf("%d%d%s%d\n",mm,p[i]->num,p[i]->name,p[i]->sum);
}
}
void menu()
{
printf("************************���Ӵ�������ͶƱ������ϵͳ***************************\n\n\n");
printf("1���ѡ����Ϣ\n2ͶƱ\n3����\n4�˳�\n");
}
int main()
{
char n;
while(1)
{
menu();
printf("\n��������Ҫѡ��Ĳ�����ţ����س���ȷ�ϣ�");
scanf("%c",&n);getchar();
while(n<'1'||n>'4')
{
printf("������������������:");
scanf("%c",&n);
getchar();
}
switch(n-48)
{
case1:tianjia();break;
case2:toupiao();break;
case3:shellsort(p,numbers);system("pause");break;
case4:printf("ллʹ�ã��ټ�!");exit(0);
}
}
}
