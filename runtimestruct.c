#include<stdio.h>
struct student 
{
	char name[50];
	int age;
	float marks;
};
   void main()
  {
  	struct student s[100];
  	int n;
  	printf("enter number of students");
  	scanf("%d",&n);
  	for(int i=0;i<n;i++)
  	{
  		printf("enter student[%d] name",i+1);
  		scanf("%s",&s[1].name);
  		printf("enter student[%d] age",i+1);
  		scanf("%d",&s[1].age);
  		printf("enter student[%d] marks",i+1);
  		scanf("%f",s[1].marks);
  	
  }
	  for(int i=0;i<3;i++)
	  {
	  	printf("student:%d\n",i+1);
    	printf("name:%s\n",s[i].name);
    	printf("age:%d\n",s[i].age);
    	printf("marks:%f",s[i].marks);
      }
  


}