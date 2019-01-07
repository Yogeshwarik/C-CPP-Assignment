#include <stdio.h>
int main()
{
	int d,y,w;
	printf("enter the day,weeks and year");
	scanf("%d%d%d",&d,&w,&y);
	y=d/365;
	w=(d%365)/7;
	d=d-((y*365)+(w*7));
	printf("%d is year of  %d week of %d day\n",y,w,d);
}



