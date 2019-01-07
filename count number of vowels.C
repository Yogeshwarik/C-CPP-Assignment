#include<stdio.h>
void main()
{
	char str[10];
	int i,v,c;
	char *p;
	clrscr();
	printf("enter the string");
	gets(str);
	p=str;
	v=0,c=0 ;
	while(*p!='\0')
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
		{
			v++;
		}
		else
		c++;
		p++;
	}
	printf("total number of vowels=%d\n",v);
	printf("total number of consonents=%d\n",c);
	getch();
}


