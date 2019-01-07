#include <stdio.h>

void main()
{
	int a=125,b=12345;
	long ax=1234567890;
	short s=4043;
	float x=2.13459;
	double dx=1.14145927;
	char c='W';
	unsigned long ux=2541567890;
	printf("a+c value is %nd\n",a+c);
	printf("a+c value is %d\n",a+c);
	printf("a+c value is % d\n",a+c);
	printf("a+c value is %  d\n",a+c);
	printf("a+c value is %0.2d\n",a+c);
	printf("x+c value is %f\n",x+c);
	printf("dx+x value is %f\n",dx+c);
	printf("((int)dx)+ax value is=%ld\n",((int) dx)+ax);
	printf("a+x value is=%f\n",a+x);
	printf("s+b value is=%d\n",s+b);
	printf("ax+b value is=%ld\n",ax+b);
	printf("s+c value is=%hd\n",s+c);
	printf("ax+c value is=%ld\n",ax+c);
	printf("ax+ux values is=%lu\n",ax+ux);

}
