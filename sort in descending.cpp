/*program to sort the numbers in descending order*/
#include<stdio.h>
int main()
{
	int i,j,n=6,t;
	 int arr[6]={1,7,5,8,4,6};

	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n-i-1;j++)
	  	{
	  		if(arr[j]<arr[j+1])
			  {
			  	t=arr[j];
			  	arr[j]=arr[j+1];
			  	arr[j+1]=t;
			  }	
    	}
	  }
	  for(i=0;i<n ;i++)
	  printf("%d", arr[i]);
	  return 0;
}
