#include <stdio.h>

void main()
{
	int hr,mi,se,sec;
	printf("enter the seconds\n");
	scanf("%d",&sec);
	hr=(sec/3600);
	mi=(sec-(3600*hr))/60;
	se=(sec-(3600*hr)-(mi*60));
	printf("hour:miniute:seconds %d:%d:%d\n",hr,mi,se);
}