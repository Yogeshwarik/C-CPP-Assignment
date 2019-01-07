#include <stdio.h>

void main()
{
	int a;
	float b;
	printf("enter the distance traveled in kms\n");
	scanf("%d",&a);
	printf("enter the spent fuel in liters\n");
	scanf("%f",&b);
	printf("the avrage consumption of km/lt=%f\n",a/b);
}
