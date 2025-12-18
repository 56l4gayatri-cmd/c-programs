//strings length function
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[]="Hyderabad";
	int len, size;
	len = strlen(str);
	size = sizeof(str);
	printf("\nLenght of the given string is: %d", len);
	printf("\nSize of the given string is: %d", size);
}