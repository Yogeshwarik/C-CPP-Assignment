#include <stdio.h>

void main()
{
	int amt,total;
	printf("enter the amount\n");
	scanf("%d",&amt);
	total=(int)amt/100;
	printf("notes of 100\n",total);
	amt=amt-(total*100);
	total=(int)amt/50;
	printf("notes of 50\n",total);
	amt=amt-(total*50);
	total=(int)amt/20;
	printf("notes of 20\n",total);
	amt=amt-(total*10);
	printf("notes of 10\n",total);
	total=(int)amt/5;
	printf("notes of 5\n",total);
	amt=amt-(total*5);
	total=(int)amt/2;
	printf("notes of 2\n",total);
}


