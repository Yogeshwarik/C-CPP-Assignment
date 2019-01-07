#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,count=0;
printf("enter the factorial no:");
scanf("%d",&n);
for(i=5;(n/i)>=1;i*=5)
{
   count=count+(n/i);
   }
   printf("no of zero in the factorial is : %d\n",count);
  }


