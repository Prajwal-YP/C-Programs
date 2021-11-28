//Write a Program to Accept Previous month Reading and Present month reading from the user, Calculate Bill Amount based upon the Data Given Below.
/*Units Consumed Rate Per Unit

Above 500 Rs.4.80
Below 500 Rs.3.50

*/

#include<stdio.h>
main()
{
	int pm,lm;
	float a;
	
	printf("Enter previous month reading... : ");
	scanf("%d",&lm);
	printf("Enter present month reading.... : ");
	scanf("%d",&pm);
	
	
	a=pm-lm;
	printf("Units consumed is.............. : %.0f",a);
	if(a>=500)
		printf("\nBill Amount is................. : Rs.%.2f/-",a*4.8);
	else
		printf("\nBill Amount is................. : Rs.%.2f/-",a*3.5);
}
