#include<stdio.h>
#include<conio.h>
#include<windows.h>

//��ͼ���� 
int amp[8][8]={
    {0,0,1,1,1,0,0,0},
	{0,0,1,3,1,0,0,0},     //0������ǿյء� 
	{0,0,1,0,1,1,1,1},     //1����ǽ�� 
	{1,1,1,2,4,2,3,1},     //2�������� �� 
	{1,3,0,2,0,1,1,1},     //3����Ŀ�ĵء� 
	{1,1,1,1,2,1,0,0},     //4������  
	{0,0,0,1,3,1,0,0},
	{0,0,0,1,1,1,0,0}};

	
//���һ��ͼ�λ��ĵ�ͼ	
void Prin()
{	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			switch(amp[i][j])
			{
				case 0:printf("  ");break;
				case 1:printf("��");break;
				case 2:printf("��");break;
				case 3:printf("��");break;
				case 4:printf("��");break;
				case 7:printf("��");break;
				case 5:printf("��");break; 
			}
		}
		printf("\n");
	}
}


//ͨ��������ά�����ҵ� �˵�ǰ�� λ�ö���������ƶ��� 
void PlayGamg()
{
	void Prin();
	int n,m;                     //n��m�������������ڵ�����λ�á� 
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(amp[i][j]==4||amp[i][j]==7)
			{
				n=i;
				m=j;
				break;
			}
		}
	}
	char ch;
	ch=getch();         //���ռ��̵������ַ� ��ֵ��ch�� 
	switch(ch)          //��switch�Լ����������ѡ��
	{
		case 'W':
		case 'w':
		/*
	����'w�� ��W ����ʾ�������ƶ������������� �������ƶ���ָʾ��
	Ҫ����ǰ���λ�ý����ж��Ƿ���Խ����ƶ���
	�����ƶ�������У�
	1.��ǰ���ǿյػ�Ŀ�ĵؿ��Խ��������ƶ���	
	2.��ǰ�������ӵ�ʱ��,������ǰ���ǿյ�ʱ������ƶ���
		*/ 
		         if(amp[n-1][m]==0||amp[n-1][m]==3)// �ж�ǰ���ǿյػ�Ŀ�ĵ� 
		         {
         			amp[n-1][m]+=4;
         			amp[n][m]-=4;
         		}
         		else    //ǰ���ǿյغ���Ŀ�ĵ���ǰ���������Ƕ����¼�������һ�� 
         		{
		         	if(amp[n-1][m]==2)
		         	{
	         			if(amp[n-2][m]==0||amp[n-2][m]==3)//�ж�����Ǯ�ǿյػ���Ŀ�ĵء� 
	         			{
		         		amp[n][m]-=4;
	         			amp[n-1][m]+=2;
	         			amp[n-2][m]+=2;
			         	}
	         		}
		         }
         		;break;
         case 'A':
		 case 'a':
		 if(amp[n][m-1]==0||amp[n][m-1]==3)     //ͬ�� 
		         {
         			amp[n][m-1]+=4;
         			amp[n][m]-=4;
         		}
         		else
         		{
		         	if(amp[n][m-1]==2)
		         	{
	         			if(amp[n][m-2]==0||amp[n][m-2]==3)
	         			{
		         		amp[n][m]-=4;
	         			amp[n][m-1]+=2;
	         			amp[n][m-2]+=2;
			         	}
	         		}
		         }
		 break;
		          		
		 case 'S':
		 case 's':
		 if(amp[n+1][m]==0||amp[n+1][m]==3)
		         {
         			amp[n+1][m]+=4;
         			amp[n][m]-=4;
         		}
         		else
         		{
		         	if(amp[n+1][m]==2)
		         	{
	         			if(amp[n+2][m]==0||amp[n+2][m]==3)
	         			{
		         		amp[n][m]-=4;
	         			amp[n+1][m]+=2;
	         			amp[n+2][m]+=2;
			         	}
	         		}
		         }
		 break;
		 case 'D':
		 case 'd':
		 if(amp[n][m+1]==0||amp[n][m+1]==3)
		         {
         			amp[n][m+1]+=4;
         			amp[n][m]-=4;
         		}
         		else
         		{
		         	if(amp[n][m+1]==2)
		         	{
	         			if(amp[n][m+2]==0||amp[n][m+2]==3)
	         			{
         				amp[n][m+2]+=2;
		         		amp[n][m]-=4;
	         			amp[n][m+1]+=2;
	         			
			         	}
	         		}
		         }
		 break;
	}
}



//����Ϸ�Ƿ���������жϡ� 
int Over()
{
	int flag=1;            
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(amp[i][j]==2)//���������Ƿ������ӡ� 
			{
				flag=0;
			}
		}
	}
	if(flag)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int k=1;
	while(k)
	{
		k=Over();     //�������ȫ����Ŀ�ĵؾͷ��ء�0�����򷵻ء�1���� 
		system("cls");//��մ��� 
		Prin(); 
	}
	printf("\n��Ϸ������\n");
	getchar();       //�ó���������н�����ȴ�����߰��¼��̲ŷ��ر༭���� 
	return 0;
}