#include<stdio.h>
#include<conio.h>
void main()
{
	int cid,ucon;
	char cname[10];
	float surchrg=0,netamt,gvamt,chrg;
	printf("enter the customer id\n");
	scanf("%d",&cid);
	printf("enter the customer name\n");
	scanf("%s",cname);
	printf("enter the unit consumed amt\n");
	scanf("%d",&ucon);
	if(ucon<200)
	{
	
		chrg=1.20;}
		else if(ucon>=200 && ucon<400)
				{
				chrg=1.50;}
				else if(ucon>=400 && ucon<600)
				{
				chrg=1.80;}
					else
			{
						chrg=2.00;}
		gvamt=ucon*chrg;
		if(gvamt>300)
			{
			surchrg=gvamt*15/100.0;
			netamt=gvamt+surchrg;
		    }
			if(netamt<100)
				netamt=100;
		printf("Customer id=%d\n",cid);
		printf("Customer name=%s\n",cname);
		printf("Unit Consumed=%d\n",ucon);
		printf("Amount Charges @Rs. 2.00 per unit=%f\n",chrg,gvamt);
		printf("Surchage Amount=%f\n",surchrg);
		printf("Net Amount Paid By the Customer=%f\n",netamt);
}
						
