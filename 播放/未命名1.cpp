#include<windows.h>
 #include<mmsystem.h> 
 #pragma comment(lib,"WINMM.LIB") 
 int main() 
 { 
   mciSendString(TEXT("open misc.mp3"),NULL,0,NULL);
    mciSendString(TEXT("play misc"),NULL,0,NULL);
   Sleep (50000);
   return 0; 
   }
