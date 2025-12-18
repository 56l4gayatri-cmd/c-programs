#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	float r1,r2;
	printf("enter a,b,c values");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt((b*d)+(4*a*c));
	if(d>=0)
	{
		r1=(-b+d)/(2*a);
		r2=(-b-d)/(2*a);
		printf("the roots %f/t %f", r1,r2);
	}
	else
	printf("displaying roots are imaginary");
}