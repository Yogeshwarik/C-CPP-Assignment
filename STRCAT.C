#include<stdio.h>
void stringcat(char str1[],char str2[])
{
	int i,j;
	for(i=0;str1[i]!='\0';i++);
	for(i=0;str2[i]!='\0';i++);
	str1[i+1]=str2[j];
	str1[i]='\0';
}
void main()
{
	char str1[100],str2[100];
	clrscr();
	printf("enter the string\n");
	gets(str1);
	gets(str2);
	stringcat(str1,str2);
	printf("after copy str1 is\n");
	puts(str1);
	getch();
}


