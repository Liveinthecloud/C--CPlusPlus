#include<stdio.h>  
#include<stdlib.h>  
#include<windows.h>  
#include<conio.h>  
void DrawMap(int map[10][12]);  
void checkkb();  
int a=0,b=0;  
int count = 0;//����0  
int gmap[10][12]={  
    {0,0,0,1,1,1,0,0,0,0,0,0},  
    {0,0,0,1,3,1,0,0,0,0,0,0},  
    {0,0,0,1,0,1,1,1,1,1,1,1},  
    {1,1,1,1,4,0,4,0,0,0,3,1},  
    {1,3,0,0,4,2,1,1,1,1,1,1},  
    {1,1,1,1,1,4,1,0,0,0,0,0},  
    {0,0,0,0,1,0,1,0,0,0,0,0},  
    {0,0,0,0,1,0,1,0,0,0,0,0},  
    {0,0,0,0,1,3,1,0,0,0,0,0},  
    {0,0,0,0,1,1,1,0,0,0,0,0}};//1����ǽ   2������  3����Ŀ��λ��  4��������  
int main(){  
  
    //���ô��ڴ�С  
    system("mode con cols=80 lines=25");  
    //���ô��ڱ���  
    SetConsoleTitleA("������");  
    while(1){  
        system("cls");//����  
        printf("    ��������Ϸ\n");  
        checkkb();  
        DrawMap(gmap);  
          
        printf("����:%d\n",count);  
        printf("����:<%d,%d>\n",a+1,b+1);  
  
        _sleep(10);  
    }  
    return 0;  
}  
  
void DrawMap(int map[10][12]){  
    for(int i=0;i<10;i++){  
        for(int j=0;j<12;j++){  
            switch(map[i][j]){  
            case 0:  
                printf("  ");//����·  
                break;  
            case 1:  
                printf("��");//��ǽ  
                break;  
            case 3:  
                printf("&&");//��Ŀ�ĵ�  
                break;  
            case 2:  
                printf("��");//��С��  
                a=i;b=j;  
                break;  
            case 4:  
                printf("��");//������  
                break;  
            case 5:  
                printf("��");//���Ӻ�Ŀ�ĵ��غ�  
                break;  
              
            }  
        }  
        printf("\n");  
    }  
}  
  
void checkkb(){  
if(kbhit()){  
    char c = getch();  
    switch(c){  
    case 72://��  
        switch(gmap[a-1][b]){  
        case 0://·  
        gmap[a][b]=0;  
        gmap[a-1][b]=2;  
        break;  
        case 4://����  
            if(gmap[a-2][b]==3){//��Ŀ�ĵ�  
                gmap[a][b]=0;  
                gmap[a-2][b]=5;  
                gmap[a-1][b]=2;  
                count++;  
                break;  
            }  
            if(gmap[a-2][b]!=1){//����ǽ  
                gmap[a][b]=0;  
                gmap[a-2][b]=4;  
                gmap[a-1][b]=2;  
            }  
              
          
        break;  
  
        }  
          
        break;  
    case 80://��  
        switch(gmap[a+1][b]){  
        case 0://·  
        gmap[a][b]=0;  
        gmap[a+1][b]=2;  
        break;  
        case 4://����  
            if(gmap[a+2][b]==3){//��Ŀ�ĵ�  
                gmap[a][b]=0;  
                gmap[a+2][b]=5;  
                gmap[a+1][b]=2;  
                count++;  
                break;  
            }  
            if(gmap[a+2][b]!=1){//����ǽ  
                gmap[a][b]=0;  
                gmap[a+2][b]=4;  
                gmap[a+1][b]=2;  
            }  
              
          
        break;  
  
        }  
        break;  
    case 75://��  
        switch(gmap[a][b-1]){  
        case 0://·  
        gmap[a][b]=0;  
        gmap[a][b-1]=2;  
        break;  
        case 4://����  
            if(gmap[a][b-2]==3){//��Ŀ�ĵ�  
                gmap[a][b]=0;  
                gmap[a][b-2]=5;  
                gmap[a][b-1]=2;  
                count++;  
                break;  
            }  
            if(gmap[a][b-2]!=1){//����ǽ  
                gmap[a][b]=0;  
                gmap[a][b-2]=4;  
                gmap[a][b-1]=2;  
            }  
          
        break;  
  
        }  
        break;  
    case 77://��  
        switch(gmap[a][b+1]){  
        case 0://·  
        gmap[a][b]=0;  
        gmap[a][b+1]=2;  
        break;  
        case 4://����  
            if(gmap[a][b+2]==3){//��Ŀ�ĵ�  
                gmap[a][b]=0;  
                gmap[a][b+2]=5;  
                gmap[a][b+1]=2;  
                count++;  
                break;  
            }  
            if(gmap[a][b+2]!=1){//����ǽ  
                gmap[a][b]=0;  
                gmap[a][b+2]=4;  
                gmap[a][b+1]=2;  
            }  
          
        break;  
  
        }  
        break;  
    }  
}  
}  