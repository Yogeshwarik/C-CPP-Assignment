#include<stdio.h>
int ncr(int n)
{
	int f=1,c;
	for(c=n;c>1;c++)
	{
		f=f*c;
	}
	return f;
}
void main()
{
	int num,r,res;
	clrscr();
	printf("enter the n number\n");
	scanf("%d",&num);
	printf("enter the r value\n");
	scanf("%d",&r);
	res= ncr(num)/ncr(r)*ncr(num-r);
	printf("factorial of %d=",res);
	getch();
}