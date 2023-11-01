#include<stdio.h>
int main()
{
	int a[100],i,n,t,k,j;
	printf("size of the array:");
	scanf("%d",&n);
	printf("enter the original elements of the array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			  t=a[j];
		      a[j]=a[j+1];
		      a[j+1]=t;
	        }
    	}
    }
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
	printf("enter the k value:");
	scanf("%d",&k);
	printf("min kth value is %d",a[k-1]);
	printf("max kth value is %d",a[n-k]);
	printf("\n");
	return 0;
}
