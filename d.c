#include<stdio.h>
void main()
{
	int u,a,t;
	float s;
	printf("enter a,t,u values");
	scanf("%d%d%d", &a,&t,&u);
	s=(u*a)+(0.5*a*t*t);
	printf("displacement of %f",s);
}