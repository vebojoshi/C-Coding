#include<stdio.h>

struct Student	
{
	int rollno;
	char name[20];
	float marks;
}s1;

void main()
{
	struct Student s1;
	printf("enter the rollno");
	scanf("%d",&s1.rollno);
	
	printf("Enter Name");
	scanf("%s",s1.name);
	
	printf("Enter Marks");
	scanf("%f",&s1.marks);
	
	
	printf("Roll No=%d",s1.rollno);
	printf("Name=%s",s1.name);
	printf("Marks=%f",s1.marks);

}
