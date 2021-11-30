/*
	Program Name.. : not.c
	Author........ : Prajwal Y P
	Program Task.. : To verify number of countries,spokes in chakra and month with the help of NOT operator
*/

#include<stdio.h>
main()
{
	int count=0;
	
	//Checking no. of countries in usa
	printf("How many countries are there in United States Of America : ");
	scanf("%d",&count);
	if(count!=35)  //Use of NOT operator
		printf("\aWrong answer.");
		else
			printf("Correct answer.");
	printf("\n\n");	
	
	//Verifing the no. of spokes in Ashoka chakra	
	printf("How many spokes are there in Ashoka Chakra in Indian Flag : ");
	scanf("%d",&count);
	if(count!=24)  //Use of NOT operator
		printf("\aWrong answer.");
		else
			printf("Correct answer.");	
	printf("\n\n");
			
	//To verfify a month of an year
	printf("Input a month number which has at least 30 days in it  : ");
	scanf("%d",&count);
	if (13>count && count>0)
	{
		if(count!=2)  //Use of NOT operator
			printf("Correct answer.");
		else
			printf("\aWrong answer.");		
	}
	else
	{
		printf("\aInvalid month !");
	}
}
