#include<stdio.h>
void main()
{
	int n,i;
	clrscr();
	printf("enter the number\n");
	scanf("%d",&n);
	printf("factor of number %d\n",n);
	for(i=1;i<=n;i++)
	{

		if(n%i==0)
		{
			printf("%d\n",i);
		}
	}
	getch();
}
