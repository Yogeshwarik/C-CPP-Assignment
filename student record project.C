#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno;
    char name[10];
    float marks;
};
struct student stu_fun(int,char,float);
void add(struct student *ptr);
void search(struct student *ptr);
void modify(struct student *ptr);
void delete(struct student *ptr);
void display(struct student s);
void main()
{
    int i,n,a[10];
    struct student st;
    clrscr() ;
    printf("Enter the number of students\n");
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
	printf("Enter the roll number\n");
	scanf("%d",&st.rollno) ;
	printf("Enter the name\n") ;
	scanf("%s",st.name);
    }
    stu_fun(st.rollno,st.name);
    switch(n)
    {
	case 1:printf("add student\n");
		add(struct student *ptr);
		break;
	case 2:printf("search student\n");
		search(struct student *ptr);
		break;
	case 3:printf("modify student\n");
		break;
	case 4:printf("delete student\n");
		delete(struct student *ptr);
		break;
		default:printf("invalid choice\n");
    }
    getch();
}
struct student stu_fun(int rollno,char name)
{
	 printf("\nRoll No\tName\t\n");
	 printf("%d\t %s\n",rollno,name);
}
void add(struct student *ptr)
{
	printf("Roll No\n");
	scanf("%d",&ptr->rollno);
	printf("name\n");
	scanf("%s",ptr->name);
}
void search(struct student *ptr)
{
    printf("enter the roll number to be search the student\n");
    scanf("%d",&ptr->rollno);
    for(i=0;i<n;i++)
    {
    if(rollno==ptr->rollno)
    {
	printf("student details are\n");
	printf("\nRoll No\tName\t\n");
	for(i=0;i<n;i++)
	{
		display(s);

	}
    }
    }

    getch() ;
}
void display(struct student s)
{
	printf("student details are\n");
	printf("student rollno=%d\n",rollno);
	printf("student name=%s\n",name);
}


