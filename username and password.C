#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char u[]="yogi",p[]="1234",i,u1[25],p1[25];
	int a,b,k;
	printf("enter the username\n");
	scanf("%s",u1);
	printf("enter the password\n");
	k=0;
	do
	{
		p1[k]=getch();
		if(p1[k]!='\r')
		{
		printf("*");
		}
		k++;
	}while(p1[k-1]!='\r');
		p1[k-1]='\0';
	printf("%s",p1[k]);
	a=strcmp(u,u1);
	b=strcmp(p,p1);
	if(a==0 && b==0)
	{
		printf("successfully login\n");
	}
	else
	{
		printf("login failes\n");
	}
	return 0;
}

