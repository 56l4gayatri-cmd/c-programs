#include<stdio.h>
void add(int,int);
void main()
{
	int a,b,c;
	printf("enter a,b value");
	scanf("%d%d",&a,&b);
	add (a,b);
}
    void add (int x,int y)
    {  
      int z;
      z=x+y;
      printf("sum of %d",z);
    }
