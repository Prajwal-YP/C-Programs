//Write a Program to Check whether the inputted year is leap year not.

#include<stdio.h>
main()
{
	int y=0;

	printf("Enter your present year.... : ");
	scanf("%d",&y);
	
	if( (y%4==0 && y%100!=0) || y%400==0)
		printf("\n\tYear \'%d\' is a Leap year.",y);
	else
		printf("\n\tYear \'%d\' is not a Leap year.",y);	
	
	printf("\n\nNOTE : If it is a century year, than it is a leap year only ;\n\tif that year is DIVISIBLE BY \"400\" not \"4\" ");	
}
