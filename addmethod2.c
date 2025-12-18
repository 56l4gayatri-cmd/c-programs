#include<stdio.h>
int add();
void main()
{
	int c;
	c=add();
	printf("%d",c);
}
int add()
{
	int a,b,z;
	printf("enter a,b value");
	scanf("%d%d",&a,&b);
	z=a+b;
	return z;
}