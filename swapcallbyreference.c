#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("enter the value of a,b");
	scanf("%d%d,&a,&b");
	swap(&a,&b);
}
void swap (int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("after swaping numbers %d%d",*p1,*p2);
}