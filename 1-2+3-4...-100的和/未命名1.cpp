#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	system("mode con cols=48 lines=25");
	SetConsoleTitleA("¿€º”");
	system("color FA");
	int sum=0;
	int i=1;
	int s=1;
	while(i<=100)
	{
		sum=sum+i*s;
		i++;
		s=s*(-1);
	}
	printf("1-2+3-4+5...-100=%d\n",sum);
	system("pause");
	return 0;
}