#include<stdio.h>
void changePos(char *ch1,char *ch2)
{
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}
void charPermu(char *cht,int stno,int endno)
{
	int i;
	if(stno==endno)
		printf("%s\n",cht);
		else
		{
		   for(i=stno;i<=endno;i++)
		   {
			changePos((cht+stno),(cht+i));
			charPermu(cht,stno+1,endno);
			changePos((cht+stno),(cht+i));
		   }
	      }
}
void main()
{
	char str[]="DELHI";
	int n;
	clrscr();
	printf("generate permutation of a given string\n");
	n=strlen(str);
	printf("the permutation of the string are\n");
	charPermu(str,1,n-1);
	getch();


}