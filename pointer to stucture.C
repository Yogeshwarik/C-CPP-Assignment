#include<stdio.h>
struct student
{
	int sid;
	char sname;
};
void main()
{
	struct student *sptr,s1;
	clrscr();
	sptr=&s1;
	printf("enter the student id\n");
	scanf("%d",&sptr->sid);
	printf("enter the student name\n");
	scanf("%s",sptr->sname);
	printf("student id=%d\n",sptr->sid);
	printf("student name=%s\n",sptr->sname);
	getch();
}

