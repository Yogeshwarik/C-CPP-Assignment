#include<stdio.h>
int len(char str[])
{
	int i;
	i=0;
	if(str[i]!='\0')
	{
	do
	{
		i++;
	}while(str[i]!='\0');
	}
	return i ;

}
void main()
{
	char str[100];
	int strlen1;
	clrscr();
	printf("enter the string\n");
	gets(str);
	strlen1=len(str);
	printf("kength of the string\n",strlen1);
	getch();
}


