/*
	Pragram Name... : Leap_year.c
	Author......... : Prajwal Y P
	Program Task... : To Check whether the inputted year is a leap year.
*/

#include<stdio.h>
main()
{
	int y=0;

	printf("Enter your present year.... : ");
	scanf("%d",&y);
	
	if( (y%4==0 && y%100!=0) || (y%400==0) )
		printf("\n\t\'%d\' is a Leap year.",y);
	else
		printf("\n\t\'%d\' is not a Leap year.",y);	
	
	printf("\n\nNOTE : If it is a century year, than it is a leap year only if that year is DIVISIBLE BY \"400\" not \"4\" .");	
}
