/*pogram to find max,min and avg*/
#include<stdio.h>
int main()
{
	int i,j,n=4,min,max,average,t,s=0,p;
	average=p;
	int arr[4]={5,8,3,9};
	//for(i=0;i<n;i++)
	//printf("%d",arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
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
	{
	s=s+arr[i];
    }
    p=s/4;
    printf("min= %d",arr[0]);
    printf("max= %d",arr[3]);
    printf(" average=%d",p);
    printf("\n");
    return 0;
}
