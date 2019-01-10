#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *fp;
   char ch;
   int nl=0,nt=0,ns=0,nc=0;
   clrscr();
   fp=fopen("student.txt","r");
   while(1)
   {
      ch=fgetc(fp);
      if(ch==EOF)
      break;
      nc++;
      if(ch==' ')
      ns++;
      if(ch=='\n')
      nl++;
      if(ch=='\t')
      nt++;
   }
   fclose(fp);
   printf("\n Number of characters = %d",nc);
   printf("\n Number of blanks = %d",ns);
   printf("\n Number of tabs = %d",nt);
   printf("\n Number of lines = %d",nl);
   getch();
}

