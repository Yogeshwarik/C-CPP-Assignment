#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,temp;

	printf("enter the array size\n");
	scanf("%d",&n);
	printf("enter the number of elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{

			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
	}
		printf("sorted array in ascending order\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}

	
}
