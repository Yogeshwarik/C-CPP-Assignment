#include<stdio.h>
void main()
{
	int i,sum=0,avg,n;
	clrscr();
	printf("enter the n natural numbers\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=n*(n+1)/2;
		avg=sum/n;
	}
	printf("avrage of n natural numbers is %d\n",avg);
	getch();
}