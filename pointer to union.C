#include<stdio.h>
union student
{
	int sid;
	char *sname;
};
void main()
{
	union student std,*sptr;
	clrscr();
	std.sname="yogi";
	sptr=&std;
	printf("%s\n",sptr->sname,(*sptr).sname);
	getch();
}


