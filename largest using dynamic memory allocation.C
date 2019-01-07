#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, n;
    float *element;
    clrscr();
    printf("Enter total number of elements(1 to 100)\n");
    scanf("%d", &n);
    element=(float*)calloc(n,sizeof(float));
    if(element== NULL)
    {
	printf("no memory allocated\n");
	exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)
    {
	printf("Enter Number: %d=",i+1);
	scanf("%f",element+i);
    }
    for(i=1;i<n;++i)
    {
	if(*element<*(element+i))
	*element=*(element+i);
    }
    printf("Largest element = %.2f", *element);
    getch();

}

