#include<stdio.h>
#include<string.h>
void main()
{

	int i,n,str[100];
	char temp;
	clrscr();
	printf("enter the string\n");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++);
	{
	n=i;
	for(i=0;i<=n-i-1;i++)
	{
	 temp=str[i];
	 str[i]=str[n-i-1];
	 str[n-i-1]=temp;
	}
}
	 if(str[i]==str[n-i-1])
	 {
	 printf("palindrom\n");
	 }
	 else
	 printf("not a palindrom\n");
	 getch();

}
