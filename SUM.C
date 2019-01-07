#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a[10],sum=0;
	printf("enter the size 																																																			 of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of all elements of array %d",sum);
	getch();
}




