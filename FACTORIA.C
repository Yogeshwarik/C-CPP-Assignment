#include<stdio.h>
void main()
{
	int n,fact=1,i;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		fact=fact*i;
	printf("factorial of %d is %d",n,fact);
	getch();
}