#include<stdio.h>
#include<conio.h>

void main(int argc, char * argv[]) 
{
   int i,sum= 0;
	if (argc!= 3) 
	{
      printf("enter the numbers");
      exit(1);
   }
 
   printf("The sum of given numbers");
 	for(i=1;i<argc; i++)
      sum = sum + atoi(argv[i]);
 
   printf("%d",sum);
 
}
