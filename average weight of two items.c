#include <stdio.h>

void main()
{
	double item1,item2;
	double w1,w2;
	printf("enter the two items\n");
	scanf("%lf%lf",&item1,&item2);
	printf("enter the weight of item1 and item2\n");
	scanf("%lf%lf",&w1,&w2);
	int res=((w1*item1)+(w2*item2))/(item1+item2);
	printf("avrage of two averages =%d",res);
}
		

