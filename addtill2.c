/*
	Program Name	:	addtill2.c
	Author  			:	Prajwal Y P
	Task		    	:	Program to read price of 5 Product and add it to Shopping cart .
*/

#include<stdio.h>

main()
{
	int i,n,s=0;
	printf("\nWelcome To E-Commerece Online Store");
	printf("\n-----------------------------------");
	
	printf("\n\n");
	
	for(i=0;i< 5;i++)
	{
		printf("\nEnter Product-%d Price : ",i+1);
		scanf("%d",&n);
		if(n<=10000)
			s+=n;
		else
			continue;
	}
	
	printf("\n\t\t(Products above 10,000 are not available for cash on delivery)");
	printf("\n\n\tTotal Bill Amount\t:\t%d\n\n",s);
	
}
