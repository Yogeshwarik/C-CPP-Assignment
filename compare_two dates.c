#include<stdio.h>
#include<conio.h>
struct Date
{
	int date;
	int month;
	int year;
}d[2];
int main()
{
	int i,f=0;
	clrscr();
	for(i=0;i<2;i++)
	{
		printf("enter the day for the %d date\n",i+1);
		scanf("%d",&d[i].date);
		printf("enter the month for the %d date\n",i+1);
		scanf("%d",&d[i].month);
		printf("enter the year for the %d date\n",i+1);
		scanf("%d",&d[i].year);
	}
	if(d[0].date==d[1].date)
	{
		if(d[0].month==d[1].month)
		{
			if(d[0].year==d[1].year)
			{ 			
				f=1;
			}
		}
	}
	if(f==1)
		printf("The dates are equal");
	else
		printf("The dates are not equal");
	getch();
	return 0;

}
