#include<stdio.h>
void main()
{
	int a[50],n,i,max,min;
	printf("enter number of elements\n ");
	scanf("%d",&n);
	printf("enter %d array values\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
		max=a[i];
	}
	printf("max and min values are %d and %d",max,min);
}