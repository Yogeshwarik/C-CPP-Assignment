#include<stdio.h>
struct student
{
	char name[10];
	int rollno;
	char address[10];
	int age;
}s[15];
void main()
{       int i,n;
	clrscr();
	printf("enter the student details\n");
	printf("Enter the number of students\n");
	scanf("%d", &n) ;
	for(i=0;i<n;i++)
	{
	printf("Enter the roll number\n");
	scanf("%d", &s[i].rollno) ;
	printf("Enter the name\n") ;
	scanf("%s", s[i].name);
	printf("enter the address\n");
	scanf("%s",s[i].address);
	printf("enter the age\n");
	scanf("%d",&s[i].age);
    }
    printf("\nRoll No\tName\t\Address\tAge\n");
    printf("----------------------------------\n");
    for(i=0;i<n;i++)
    {
	printf("%d\t %s\t %s\t %d\n",s[i].rollno,s[i].name,s[i].address,s[i].age);
    }
    getch() ;
}