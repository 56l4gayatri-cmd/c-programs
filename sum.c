#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	while(i>=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of %d",sum);
}