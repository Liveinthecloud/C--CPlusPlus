#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,z,n=100;
	while(n<=999)
	{
		i=n/100;     //��λ��
		j=n/10%10;    //ʮλ
		z=n%10;       //��λ 
		if(n==pow(i,3)+pow(j,3)+pow(z,3))//������407��pow����ʹ��ʱ��������Ϊ��0�� 
		{
			printf("%d\t",n);
		}
		n++; 
	}
	return 0;
}