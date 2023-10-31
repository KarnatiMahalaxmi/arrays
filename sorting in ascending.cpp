/*program to sort the numbers in ascending order*/
#include<stdio.h>
int main()
{
	int i,j,t,n=5;
	int arr[5]={7,4,9,3,8};
//	for(i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
}
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	return 0;
}
