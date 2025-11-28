#include<stdio.h>
void main()
{
	int a,b,c;
	char ch;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("menu/n"),
	printf("+.add,-.subtraction,*.multiplication,/.divide,%.reminder");
    scanf("%c",&ch);
    switch (ch)
    {
    	case '+':c=a+b;
    	printf("sum of %d",c);
    	break;
    	case '-':c=a-b;
    	printf("sub of %d",c);
    	break;
    	case '*':c=a*b;
    	printf("multiplication of %d",c);
    	break;
    	case '/':c=a/b;
    	printf("division of %d",c);
    	break;
    	case '%':c=a%b;
    	printf("modular of %d",c);
    	break;
    	default:printf("invalid option");
    }
}
	
    