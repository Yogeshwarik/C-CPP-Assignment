#include<stdio.h>
void main()
{
	int a[10],n,i;
	clrscr();
	printf("enter the size of an array\n");
	scanf("%d",&n);
	printf("enter the elements of an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf(" negative element of an array\n");
			printf("%d\n",a[i]);
		}

	}
	getch();
}
