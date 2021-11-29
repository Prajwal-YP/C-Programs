// Write a Program to Print Discount & Actual Amount from the Given Details. Sales Discount
/*-----------------------------------
>=25,000 25%
20,000-25,000 20%
10,000-20,000 10%
5,000-10,000 5%
Below 5000 No Discount
*/


#include<stdio.h>
main()
{
	float price,d=0;
	printf("Enter the total product Price : Rs.");
	scanf("%f",&price);
	
	if(price>=25000)
	{
		d=(price*25)/100;
		price-=d;
		printf("\n\tDiscount is ........ : Rs.%.2f/-\n\tFinal Amount is ..... : Rs%.2f/-",d,price);
	}	
	else if(price>=20000)
	{
		d=(price*20)/100;
		price-=d;
		printf("\n\tDiscount is ........ : Rs.%.2f/-\n\tFinal Amount is ..... : Rs%.2f/-",d,price);
	}
	else if(price>=10000)
	{
		d=(price*10)/100;
		price-=d;
		printf("\n\tDiscount is ........ : Rs.%.2f/-\n\tFinal Amount is ..... : Rs%.2f/-",d,price);
	}
	else if(price>=5000)
	{
		d=(price*5)/100;
		price-=d;
		printf("\n\tDiscount is ........ : Rs.%.2f/-\n\tFinal Amount is ..... : Rs%.2f/-",d,price);
	}
	else
	{
		printf("\n\tDiscount is ........ : Rs.%.2f/-\n\tFinal Amount is ..... : Rs%.2f/-",d,price);
	}
}
