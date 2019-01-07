#include <stdio.h>

void main()
{
	float area;
	int perimeter,l,w;
	float width,height;
	printf("enter the length & width of the rectangle\n");
	scanf("%d%d",&l,&w);
	perimeter=2*l*w;
	printf("perimeter of the rectangle is=%d inches\n",perimeter);
	printf("enter the width and height of the rectangle\n");
	scanf("%f%f",&width,&height);
    area=width*height;
	printf("area of the rectangle is=%f",area);
}