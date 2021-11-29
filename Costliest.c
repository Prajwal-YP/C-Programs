/*
	Program Name.... : Cosliest.c
	Author.......... : Prajwal Y P
	Program task.... : To find the costliest mode of transport between Banglore and New Delhi
*/

#include<stdio.h>
main()
{
	int a,b,c;
	a=b=c=0;
	
	printf("To Travel from Mysore to Delhi, in different modes of transport.....");
	printf("\n\nEnter ticket price of Bus from \'Banglore\' to \'Delhi\' : Rs. ");
	scanf("%d",&a);  //Approximately Rs.27300
	printf("Enter ticket price of Airplane from \'Banglore\' to \'Delhi\' : Rs. ");
	scanf("%d",&b);	//Approximately Rs.7422
	printf("Enter ticket price of Train from \'Banglore\' to \'Delhi\' : Rs. ");
	scanf("%d",&c);	//Approximately Rs.833
	
	if(a>b && a>c)
		printf("\n\tThe costliest mode of transport From \'Banglore\' to \'Delhi\' is via Bus (Rs.%d/-)",a);
	else
		if(b>c)
			printf("\n\tThe costliest mode of transport From \'Banglore\' to \'Delhi\' is via Airplane (Rs.%d/-)",b);
		else
			printf("\n\tThe costliest mode of transport From \'Banglore\' to \'Delhi\' is via Train (Rs.%d/-)",c);
}
