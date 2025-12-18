#include<stdio.h>
void main()
{
	int a,b,c;
	int ch;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("menu/n"),
	printf("1.add,2.subtraction,3.multiplication,4.divide,5.reminder");
    scanf("%d",&ch);
    switch (ch)
    {
    	case 1:c=a+b;
    	printf("sum of %d",c);
    	break;
    	case 2:c=a-b;
    	printf("sub of %d",c);
    	break;
    	case 3:c=a*b;
    	printf("multiplication of %d",c);
    	break;
    	case 4:c=a/b;
    	printf("division of %d",c);
    	break;
    	case 5:c=a%b;
    	printf("modular of %d",c);
    	break;
    	default:printf("invalid option");
    }
    	
	}
    