#include<stdio.h>
#include<math.h>
void main()
{
	int u,a,s,v;
	printf("enter u,a,s, values");
	scanf("%d%d%d",&u,&a,&s);
	v=sqrt(u*u)+(2*a*s);
	printf("velocity of %d",v);
}