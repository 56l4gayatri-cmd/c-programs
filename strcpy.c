#include<stdio.h>
void main()
{
	char a[100]="dennies";
	char b[100];
	printf("%s\n",a);
	strcpy(b,a);
	printf("%s",b);
}