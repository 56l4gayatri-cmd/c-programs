#include<stdio.h>
int main()
{
	int arr[10],max,min,size,i,sum=0;
	float avg;
	
	printf("enter size of the array (<10): ");
	scanf("%d",&size);
	
	printf("enter elements of the array:");
	for(i=0; i<size; i++)
	{
		scanf("%d",&arr[i]);
		sum +=arr[i];
	}
	min=max=arr[0];
	for(i=1;i<size;i++)
	{ if(arr[i]>max)
	max=arr[i];
	
	if(arr[i]<min)
	min=arr[i];	
	}		
	avg=(float)sum/size;
	printf("\nmaximum is :%d",max);
	printf("\nminimum is:%d",min);
	printf("\naverage is :%.2f",avg);
	return 0;
}