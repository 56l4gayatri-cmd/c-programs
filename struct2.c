#include<stdio.h>
struct student 
{
	char name[50];
	int age;
	float marks;
};
   void main()
  {
  	struct student s[3]={
	{"dennies",90,86.4},
	{"rossam",98,55.8},
	{"gossling",67,65.9}
};
    for(int i=0;i<3;i++)
    {
    	printf("student:%d\n",i+1);
    	printf("name:%s\n",s[i].name);
    	printf("age:%d\n",s[i].age);
    	printf("marks:%f",s[i].marks);
	}
}