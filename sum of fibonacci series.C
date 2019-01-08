#include<stdio.h>
void main()
{
	int n,fib1=-1,fib2=1,fib=0,i,sum=0;
	clrscr();
	printf("enter the numbers\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{


		fib=fib1+fib2;
		printf("%d\n",fib);
		sum=sum+fib;
		fib1=fib2;
		fib2=fib;


	}
	printf("sum of fibonacci series are %d\n",sum);

	getch();
}