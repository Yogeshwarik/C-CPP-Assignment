#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[10],biggest,temp;
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	biggest=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>biggest)
		{

			biggest=a[i];

		}

	}

	printf("biggest array value is=%d\n", biggest);
	getch();
}





