#include<stdio.h>
void reverse(char str[])
{
	int i,n;
	char temp;
	for(i=0;str[i]!='\0';i++);
	n=i;
	for(i=0;i<=n/2;i++)
	{
	 temp=str[i];
	 str[i]=str[n-i-1];
	 str[n-i-1]=temp;
	}

}
void main()
{
	char str[100];
	clrscr();
	printf("enter the string\n");
	gets(str);
	reverse(str);
	printf("reverse string is\n");
	puts(str);
	getch();
}
