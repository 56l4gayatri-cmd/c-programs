//check whether the given number is even or odd
#include<stdio.h>
int main(void)
{
    int n=1,limit;
	printf("enter the limit:");
	scanf("%d",&limit);
    while(n<=limit)
	{
		if(n%2==0)
		printf("%d\n",n);
		n++;    //n=n+1
	}
}