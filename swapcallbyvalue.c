#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("enter the value of a,b");
	scanf("%d%d,&a,&b");
	printf("before swaping %d%d",a,b);
	swap(a,b);
}
void swap (int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("after swaping numbers %d%d",&a,&b);
}