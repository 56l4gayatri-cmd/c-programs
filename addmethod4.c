#include<stdio.h>
int add(int,int);
void main()
{
	int a,b,c;
	printf("enter a,b value");
	scanf("%d%d",&a,&b);
	c=add (a,b);
	printf("sum of %d",c);
}
    int add (int x,int y)
    {  
      int z;
      z=x+y;
      return z;
    }