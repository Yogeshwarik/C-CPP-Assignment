#include<stdio.h>
void main()
{
	int n,i,age[10],a;
	clrscr();
	printf("enter the size\n");
	scanf("%d",&n);
	printf("enter the list of persons age\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
	}
	printf("enter the age\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(a>age[i])
		{
			printf("persons are seniors\n");
			printf("%d",age[i]);
		}
		if(a<age[i])
		{
			printf("person is tenage\n");
			printf("%d",age[i]);
		}
	}

		printf("list of eligable candidate s are \n");
		for(i=0;i<n;i++)
		printf("%d",age[i]);
		getch();
}