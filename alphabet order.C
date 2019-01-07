#include<stdio.h>
#include<string.h>
char cht;
 void cp(char *ch1,char *ch2)
  {
       char temp;
     temp=*ch1;
     *ch1=*ch2;
     *ch2=temp;
  }
void pr(char *cht,int stno,int endo)
{
  int i;
  if(stno==endo)
  {
   printf("%s \n",cht);
  }
   else
   {

     for(i=stno;i<=endo;i++)
     {
       cp((cht+stno),(cht+i));
       pr(cht,stno+1,endo);
       cp((cht+stno),(cht+i));
     }
   }
}

  void main()
{
  int n,count=0;
  char str[]="DELHI",cht1[]="";
  clrscr();
  printf("\n \n Pointer generate permutation of a given string \n");
  n=strlen(str);
  printf("the permutations of the string are : \n");
  pr(str,0,n-1);
  printf("\n Enter the string that shouble checked");
  scanf("%s \n",cht1);
  if(cht1==&cht)
  {
   printf("the enter string is placed in %d",count);
  }
  else
  {
     count++;
  }

  getch();
}