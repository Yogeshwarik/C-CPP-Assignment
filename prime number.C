#include<stdio.h>
void main()
{
	int n,i,count=0;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;

		}
	}
	if(count==2)
	{
		printf("prime number\n");
	}
		else
		printf( "not  prime number\n");


	getch() ;
}

