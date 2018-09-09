#include<stdio.h>
int main()
{
	int a[]={90,55,87,54,166,45,78,22,47,22};
	int i,j;
	printf("≈≈–Ú«∞£ª"); 
	for(i=0;i<=9;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=8;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf ("≈≈–Ú∫Û£∫");
	for(i=0;i<=9;i++)
	{
	     printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}