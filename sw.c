#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter a,b values");
	scanf("%d%d", &a,&b);
	printf("before swaping a,b are %d/t,%d/n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swaping numbers a,b are %d%d",a,b);
}