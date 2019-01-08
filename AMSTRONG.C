#include<stdio.h>
void main()
{
	int n,r,sum=0,a;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(a==sum)
	{
		printf("amstrong number\n");
	}
	else
	printf("not a amstrong number\n");
	getch();
}
