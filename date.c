#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,mc,y,lp,sum,res,a[]={1,4,4,0,2,5,0,3,6,1,4,6};
char* ch[]={"sat","sun","mon","tue","wed","thu","fri"};
printf("enter date:\n");
scanf("%d",&d);
printf("enter month:\n");
scanf("%d",&m);
printf("enter year:\n");
scanf("%d",&y);
y=y%100;
lp=y/4;
mc=a[m-1];
sum=y+lp+mc+d;
res=sum%7;
if((mc==1||mc==4)&&(y%4==0))
printf("day is:%s\n",ch[res-1]);
else
printf("day is:%s\n",ch[res]);
}


