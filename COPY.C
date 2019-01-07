#include <stdio.h>

void main()
{
    int a1[100], a2[100],i,n;
    clrscr();
    printf("enter the number of elements to be stored in the array :");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("elements are %d\n:",i);
	      scanf("%d",&a1[i]);
	}
	for(i=0; i<n; i++)
	{
	a2[i] = a1[i];
	}
	printf("The elements stored in the first array are:\n");
	for(i=0; i<n; i++)
	{
	printf("%d\n", a1[i]);
	}
	printf("The elements copied into the second array are:\n");
	for(i=0; i<n; i++)
       {
	printf("%d\n", a2[i]);
       }
	getch();
}
