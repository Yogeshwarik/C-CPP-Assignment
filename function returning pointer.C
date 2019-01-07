#include<stdio.h>
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main()
{
	int a,b;
	clrscr();
	printf("enter the two values\n");
	scanf("%d%d",&a,&b);
	printf("before swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swap(&a,&b);
	printf("after swapping\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
}

