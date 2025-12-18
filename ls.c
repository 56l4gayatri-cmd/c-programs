#include<stdio.h>
void main()
{
	int a[50],n,i,key,flag=0;
	printf("enter number of elements to be searched\n");
	scanf("%d",&n);
	printf("enter %d array values\n",n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	printf("enter key value\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("%d found at position %d",a[i],i+1);
	}
	else 
	printf("sorry! element not found");
}
