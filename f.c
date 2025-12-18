#include<stdio.h>
void main()
{
	int n,i,f=1;
	printf("enter n value");
	scanf("%d",&n);
	i=1;
	while(i>=n)
	{
		printf("f=f*i");
		i++;
	}
	printf("factorial of given integer %d",f);
}