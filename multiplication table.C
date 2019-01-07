#include<stdio.h>
void main()
{
	int n,r,i,j;
	clrscr();
	printf("enter the range of table\n");
	scanf("%d",&r);
	printf("\nenter the table number");
	scanf("%d",&n);
	for(j=1;j<=r;j++)
	{
//	printf("multiplication of is\n");
	printf("%d * %d = %d\n",n,j,n*j);
	}

	getch();
}