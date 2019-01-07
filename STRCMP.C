#include<stdio.h>
int strcomp(char str1[],char str2[])
{
	int i,j,k;
	for(i=0;str1[i]!='\0';i++);
	for(i=0;str2[i]!='\0';i++);
	if(i==j)
	{
		for(k=0;k<i;k++)
		{
			if(str1[k]!=str2[k])
			return 1;
			return 0;
		}
		return 1;
	}
}
void main()
{
	char str1[100],str2[100];
	clrscr();
	printf("enter the string\n");
	gets(str1);
	gets(str2);
	if(strcomp(str1,str2)==0)
	printf("strings are same\n");
	else
	printf("strings are diffent\n");
	getch();
}
