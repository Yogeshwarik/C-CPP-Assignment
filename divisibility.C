#include<stdio.h>
void main()
{
  int num,d,div1,div2,div3,div4,div5,div6;
  int sum=0,n1=0,n2=0;
  clrscr();
  printf("Enter the number should be divided ");
  scanf("%d",&num);
  printf("Enter the number that divides the given number in the range of (2-11)");
  scanf("%d",&d);
  switch(d)
  {
  case 2:if((num%10)%2==0)
  printf("num is divisible by 2");
  else
  printf("num is divisible by 2");
  break;
  case 3:while(num!=0)
  {
     sum=sum+(num%10);
     num=num/10;
  }
  if(sum%3==0)
  printf("num is divisible by 3");
  else
  printf("num is not divisible by 3");
  break;
  case 4:
  div2=num%100;
    n1=n1+(div2%10);
  n2=(div2-n1)*2;
  if((n1+n2)%4==0)
  printf("number is divisible by 4");
  else
  printf("number is not a divisible by 4");
  break;
  case 5:if((num%10)%5==0)
  printf("n divisible by 5");
  else
  printf("n is not divisible by 5");
  break;
  case 6: div4=num%10;
   while(num!=0)
  {
     sum=sum+(num%10);
     num=num/10;
  }
  if(((sum%3)==0) &&(div4%2==0))
  printf("num is divisible by 6");
  else
  printf("num is not divisible by 6");
  break;
  case 7:
  div1=num%10;
  div3=num/10;
  sum= div1+(3*div3);
  if(sum%7==0)
  printf("num is divisible by 7");
  else
  printf("num is not divisible by 7");
  break;
  case 8:  div1=num%10;
  div3=num/10;
  sum= div1+(2*div3);
  if(sum%7==0)
  printf("num is divisible by 8");
  else
  printf("num is not divisible by 8");
  break;
  case 9: while(num!=0)
  {
     sum=sum+(num%10);
     num=num/10;
  }
  if(sum%9==0)
  printf("n is divisible by 9");
  else
  printf("n is not divisible by 9");
  break;
  case 10:if((num%10)==0)
  printf(" n is divisible by 10");
  else
  printf("n is not divisible by 10");
  break;
  case 11:div5=num%100;
  div6=num/100;
  sum=div5+div6;
  if(sum%11==0)
  printf("num is divisible by 11");
  else
  printf("num is not divisible by 11");
  break;
  getch();
  }
}


