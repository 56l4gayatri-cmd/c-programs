#include<stdio.h>
void main()
{
	struct student
	{
		int rollno;
		char name[25];
		float avg;
	};
	   struct student s1;
	   s1.rollno=108;
	   strcpy(s1.name,"vinay");
	   s1.avg=9.7; 
	   printf("%d %s %f",s1.rollno,s1.name,s1.avg);
}
	