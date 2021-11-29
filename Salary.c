//Write a Program to accept a basic salary, allowances, deductions, and experience of an Employee and perform the following –
/*
-->Calculate gross and net salary.
-->Calculate bonus from experience
# If experience is > 5 years, then 3 months net salary is given as a bonus
# If experience is >3 years, then 2 months net salary is given as a bonus
# Otherwise, 1 month of net salary is given as a bonus.
*/

#include<stdio.h>
main()
{
	float sal,al,de,exp,gs,ns;
	sal=al=de=exp=gs=ns=0;
	
	printf("Hey enter your basic Salary................ : Rs. ");
	scanf("%f",&sal);
	printf("Hey enter your allowances.................. : Rs. ");
	scanf("%f",&al);
	printf("Hey enter your Deductions.................. : Rs. ");
	scanf("%f",&de);
	printf("Hey enter your total years of experience... : ");
	scanf("%f",&exp);
	
	gs=sal+al;
	ns=gs-de;
	
	printf("\n\tYour Gross Salary is.......... : Rs.%.2f/-",gs);
	printf("\n\tYour Net Salary is............ : Rs.%.2f/-",ns);
	printf("\n\tYour bonus is................. : Rs.");
	if(exp>5)
	{
		printf("%.2f/-",ns*3);
	}
	else if(exp>3)
	{
		printf("%.2f/-",ns*2);
	}
	else
	{
		printf("%.2f/-",ns);
	}
}
