#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i<j)
			{
			printf("*");
			}
			else
			printf(" ");
		}
			printf("\n");
	}

}

