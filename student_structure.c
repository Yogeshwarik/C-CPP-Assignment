#include<stdio.h>
struct Student
{
    int rollno;
    char name[10];
    int age;
    float marks;
}st;
int main()
{
	printf("Enter the roll number\n");
	scanf("%d",&st.rollno);
	printf("Enter the name\n") ;
	scanf("%s",st.name);
	printf("enter the age\n");
	scanf("%d",&st.age);
	printf("Enter the marks\n");
	scanf("%f",&st.marks);
    printf("\nRoll No. Name\t Age\n Marks\n");
	printf("%d\t%s\t%d\t%f\n",st.rollno,st.name,st.age,st.marks);
    return 0;

}
