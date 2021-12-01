  /*
	Program Name.. : shop.c
	Author........ : Prajwal Y P
	Program Task.. : A shop which has to offer discount/tax on price based on some criteria
*/

#include<stdio.h>
main()
{
	int cost,cf,t,doe;
	char md;
	cost=cf=t=doe=0;
	
	printf("Enter mobile price... : ");
	scanf("%d",&cost);
	cf=cost;
	printf("Are you paying cash.. : ");
	fflush(stdin);
	scanf("%c",&md);
	
	if(toupper(md)=='Y')
	{
		doe=cost*25/100;
		cost-=doe;
	} 
	
	else if(toupper(md)=='N')
	{
		printf("\nIn how many days will you pay... : ");
		scanf("%d",&t);
		
		if(t<7)
		{
			doe=cost*15/100;
			cost-=doe;
		}
		
		else
		{
			doe=cost*10/100;
			cost+=doe;
		}
	}
	
	else
		printf("\n\n\aEnter valid y or n for cash payment !!!");
	
	
	if(cost>cf)
	{
		printf("\n\n\tInitial Mobile price....... : Rs.%d/-",cf);
		printf("\n\tExtra price tax added...... : Rs.%d/-",doe);
		printf("\n\tFinal Amount of Mobile..... : Rs.%d/-",cost);
	}
	
	else
	{
		printf("\n\n\tInitial Mobile price....... : Rs.%d/-",cf);
		printf("\n\tPrice discount for Mobile.. : Rs.%d/-",doe);
		printf("\n\n\tFinal Amount of Mobile..... : Rs.%d/-",cost);
	}
	
}
