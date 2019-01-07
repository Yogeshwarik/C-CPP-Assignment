#include <stdio.h>
 
void main()
{
   int a[100], pos,i,n,insert;
   clrscr();
   printf("Enter number of elements in array\n");
   scanf("%d",&n);
   printf("Enter %d elements\n", n);
   for (i= 0;i< n; i++)
   scanf("%d", &a[i]);
   printf("Enter the location to insert an element\n");
   scanf("%d", &pos);
   printf("Enter the value to insert\n");
   scanf("%d", &insert);
   for (i=n-1;i>=pos-1;i--)
   a[i+1]=a[i];
     a[pos-1] = insert;
	printf(" array is\n");
	for (i= 0; i<= n; i++)
	printf("%d\n", a[i]);
	getch();
}
