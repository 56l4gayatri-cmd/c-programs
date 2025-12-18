#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,j,n,temp;
	int n=10;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(i=1;i<n-1;i++)
		{
			for(j=1;j>0&&a[j-1]>a[j];j--)
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
	printf("\n sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}