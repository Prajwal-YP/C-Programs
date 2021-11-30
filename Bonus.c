/*
	Program Name.. : bonus.c
	Author........ : Prajwal Y P
	Program Task.. : To classify bonus based on many factors(Maritial Status,Gender,Age)
*/

#include<stdio.h>
#include<ctype.h>
main()
{
	int age;
	char s,gen;
	
	printf("Enter your Martial Staus(Married/Unmarried). : ");
	scanf("%c",&s);
	
	
	if(toupper(s)=='M')
		printf("\n\tEligible for the bonus");
	
	else if(toupper(s)=='U')
	{
		printf("\n\nEnter your Gender(Male/Female)...... : ");
		fflush(stdin);
		scanf("%c",&gen);
		printf("\nEnter your age........................ : ");
		fflush(stdin);
		scanf("%d",&age);
		
		if( (toupper(gen)!='M') && (toupper(gen)!='F') )
			printf("\n\t\aEnter a valid Gender please.");	
		else if( (toupper(gen)=='M' && age>=30) || (toupper(gen)=='F' && age>=25) )
			printf("\n\tEligible for the bonus");
		else
			printf("\n\tNot Eligible for the bonus");
	}
	
	else
		printf("\a\n\tEnter Valid Martial Status input !!!");
}
