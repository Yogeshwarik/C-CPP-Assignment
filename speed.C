#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,p,q;
int d;
clrscr();
printf("enter the higher speed of :\n");
scanf("%d",&a);
printf("enter the early time:\n");
scanf("%d",&p);
printf("enter the lower speed:\n");
scanf("%d",&b);
printf("enter the late time:\n");
scanf("%d",&q);
d=(a*b)*(p+q);
d=d/60;
printf("total distance is:%d\n",d);
getch();
return 0;
}
