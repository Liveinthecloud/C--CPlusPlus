#include<stdio.h>
#include<conio.h>
#include<windows.h>

//地图绘制 
int amp[8][8]={
    {0,0,1,1,1,0,0,0},
	{0,0,1,3,1,0,0,0},     //0代表的是空地。 
	{0,0,1,0,1,1,1,1},     //1代表墙。 
	{1,1,1,2,4,2,3,1},     //2代表箱子 。 
	{1,3,0,2,0,1,1,1},     //3代表目的地。 
	{1,1,1,1,2,1,0,0},     //4代表人  
	{0,0,0,1,3,1,0,0},
	{0,0,0,1,1,1,0,0}};

	
//输出一个图形化的地图	
void Prin()
{	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			switch(amp[i][j])
			{
				case 0:printf("  ");break;
				case 1:printf("■");break;
				case 2:printf("□");break;
				case 3:printf("※");break;
				case 4:printf("♂");break;
				case 7:printf("♂");break;
				case 5:printf("★");break; 
			}
		}
		printf("\n");
	}
}


//通过遍历二维数组找到 人当前的 位置对人物进行移动。 
void PlayGamg()
{
	void Prin();
	int n,m;                     //n，m用来接收人现在的坐标位置。 
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
	ch=getch();         //接收键盘的输入字符 赋值给ch。 
	switch(ch)          //用switch对键盘输入进行选择
	{
		case 'W':
		case 'w':
		/*
	输入'w‘ ’W ‘表示人向上移动，当键盘输入 了向上移动的指示后，
	要对人前面的位置进行判断是否可以进行移动。
	可以移动的情况有：
	1.人前面是空地或目的地可以进行向上移懂。	
	2.人前面是箱子的时候,当箱子前面是空地时候可以移动。
		*/ 
		         if(amp[n-1][m]==0||amp[n-1][m]==3)// 判断前面是空地或目的地 
		         {
         			amp[n-1][m]+=4;
         			amp[n][m]-=4;
         		}
         		else    //前面是空地和是目的地与前面是箱子是对立事件发生其一。 
         		{
		         	if(amp[n-1][m]==2)
		         	{
	         			if(amp[n-2][m]==0||amp[n-2][m]==3)//判断箱子钱是空地还是目的地。 
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
		 if(amp[n][m-1]==0||amp[n][m-1]==3)     //同上 
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



//对游戏是否结束进行判断。 
int Over()
{
	int flag=1;            
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(amp[i][j]==2)//遍历数组是否还有箱子。 
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
		k=Over();     //如果箱子全部到目的地就返回’0‘否则返回’1‘。 
		system("cls");//清空窗口 
		Prin(); 
	}
	printf("\n游戏结束！\n");
	getchar();       //让程序调试运行结束后等待编程者按下键盘才返回编辑界面 
	return 0;
}