#include<stdio.h>
#include<conio.h>
void selection(int a[],int n)
{
	int i,temp,minIndex,pass;
	for(pass=1;pass<n;pass++)//iteration
	{
		minIndex=pass-1;
		for(i=minIndex+1;i<n;i++)
		{
			if(a[minIndex]>a[i])
			minIndex=i;
		}
		temp=a[minIndex];
		a[minIndex]=a[pass-1];
		a[pass-1]=temp;
	}
}
void main()
{
	int a[]={9,4,5,2,3,2};
	int i,m=sizeof(a)/sizeof(int);
	clrscr();
	printf("elements before calling pass 1\n");
	for(i=0;i<m;i++)
	printf("%d",a[i]);
	selection(a,m);
	printf("element after calling pass1\n");
	for(i=0;i<m;i++)
	printf("%d",a[i]);
	getch();
}

