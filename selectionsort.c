#include<stdio.h>
int main()
{
	int i,j,min,temp,n;
	for(i=0;i<=n-1,i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
   }
   int i,n=10;
   int arr[10]={7,4,1,0,2,5,8,9,6,3}
   printf("selection sorting \n");
   printf("unsorted list");
   for(i=0;i<=n-1;i++)
   printf("%d",arr[i]);
   selection(arr,n);
   printf("\n\sorted listed")
   for(i=0;i=n;i++)
   printf("%d",arr[i]);
   return0;
}