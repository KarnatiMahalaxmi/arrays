#include<stdio.h>
int main()
{
	int a[100],i,n,t;
	printf("size of the array:");
	scanf("%d",&n);
	printf("enter the original elements of the array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
    }
    for(i=0;i<n;i++)
    {
    	printf("%d",a[i]);
	}
}
