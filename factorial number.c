//printing factorial of a given number
#include<stdio.h>
int main(void)
{
    int num,n=1,factor=1;
	printf("enter the number:");
	scanf("%d",&num);
    while(n<=num)
	{
	    fact=fact*n; 
		n++;    //n=n+1
	}
	printf("factorial of %d is %d,num,fact");
}