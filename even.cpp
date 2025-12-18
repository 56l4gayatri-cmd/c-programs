//check whether the given number is even or odd
#include<stdio.h>
int main(void)
{
    int n=1,factor=1;
	printf("enter the fact:");
	scanf("%d",&factor);
    while(n<=factor)
	{
		if(n%2==0)
		printf("%d\n",n);
		n++;    //n=n+1
	}
}