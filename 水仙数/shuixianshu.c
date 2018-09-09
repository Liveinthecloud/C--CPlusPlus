#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,z,n=100;
	while(n<=999)
	{
		i=n/100;     //百位数
		j=n/10%10;    //十位
		z=n%10;       //个位 
		if(n==pow(i,3)+pow(j,3)+pow(z,3))//结果差个407，pow函数使用时底数不能为‘0’ 
		{
			printf("%d\t",n);
		}
		n++; 
	}
	return 0;
}