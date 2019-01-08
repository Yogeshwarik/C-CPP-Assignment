#include<stdio.h>

void main()
{
	int a[10],n,i,ps=0,ns=0;
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
		if(a[i]>0)
		{
		    ps=ps+a[i];
		}
		if(a[i]<0)
		{
		ns=ns+a[i];

		}
	}
	printf("sum of positive and negative elements of an array= %d",ps+ns);

	getch();
}
