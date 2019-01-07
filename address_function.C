#include<stdio.h>
void test(int *arg)
{
	printf("content of argument is %x\n",arg);
	printf("value at memory location %x is %d\n",arg,*arg);
	*arg=100;
}
void main()
{
	int x=25;
	clrscr();
	printf("x address is %x\n",&x);
	printf("x value is %d\n",x);
	test(&x);
	printf("x value is %d\n",x);
	getch();
}