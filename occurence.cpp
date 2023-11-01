#include<stdio.h>
int main()
{
	int a[100],i,n,t,k,c=0;
	printf("size of the array:");
	scanf("%d",&n);
	printf("enter the original elements of the array");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
	}
	printf("enter the number to find its occuernce:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	  {
	  	if(k==a[i])
	  	c++;
	  	else
	  	;
	  }
	  printf("%d",c);
	  return 0;
}
