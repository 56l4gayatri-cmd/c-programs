#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,temp;
	int a[10]={22,2,8,79,4,12,5,42,58,5};
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
	printf("array elements in ascending");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
  