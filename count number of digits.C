#include<stdio.h>
void main()
{
	int n,count=0;
	clrscr();
	printf("enter the digits to be count\n");
	scanf("%d",&n);
	if(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("count of digits %d",count);
	getch();
}
