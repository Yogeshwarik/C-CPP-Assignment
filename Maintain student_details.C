#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno,sub1,sub2,total;
    char name[10] ;
    float avg ;
}s[10] ;
void main()
{
    int i, n ;
    clrscr() ;
    printf("Enter the number of students\n");
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
	printf("Enter the roll number\n");
	scanf("%d", &s[i].rollno) ;
	printf("Enter the name\n") ;
	scanf("%s", s[i].name) ;
	printf("Enter the marks in sub1\n");
	scanf("%d%d",&s[i].sub1,&s[i].sub2);
	s[i].total= s[i].sub1+s[i].sub2 ;
	s[i].avg = s[i].total/2;
    }
    printf("\nRoll No. Name\t Sub1\t Sub2\t Total\t Average\n\n");
    for(i=0;i<n;i++)
    {
	printf("%d\t %s\t %d\t %d\t %d\t %f\n",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].total,s[i].avg);
    }
    getch() ;
}
