#include<stdio.h>
void main()
{
	int n,sum=0,i;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("perfect number\n");
	}
	else
	printf("not a perfect number\n");
	getch();
}
