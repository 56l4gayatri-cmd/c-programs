#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swaping of numbers a,b %d%d", a,b);
}