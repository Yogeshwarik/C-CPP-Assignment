#include<stdio.h>
void main()
{
	int n,fib1=0,fib2=1,fib,i;
	clrscr();
	printf("enter the numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		printf("fibnacci series are %d\n",fib1);
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}
	getch();
}