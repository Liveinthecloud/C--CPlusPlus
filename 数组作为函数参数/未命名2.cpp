#include<stdio.h>
void replaceMax(int arr[],int value)
{
	int max=arr[0];
	int index=0;
	int i;
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			index=i;
		}
		arr[index]=value;//´«Èëº¯Êý 
	}
}
int main()
{
	int i;
	int arr1[]={10,41,3,12,22};
	int arr2[]={1,2,3,4,5};
	replaceMax(arr1,arr2[0]);
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	return 0;
}