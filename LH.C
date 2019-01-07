#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,a[10],high,low;
	clrscr();
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	low=a[i];
	high=a[i];
	for(i=0;i<n;i++)
	{
		if(a[i]>high)
		{
			high=a[i];
		}
		else
		{
			if(a[i]<low)
			{
				low=a[i];
			}
		}
	}
	printf("highest array value is=%d\n",high);
	printf("lowest array value is=%d\n",low);
	getch();
}





