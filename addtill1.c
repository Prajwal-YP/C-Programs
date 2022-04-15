/*
	Program Name		:	addtill1.c
	Author			:	Prajwal Y P
	Task			:	To Read 10 Numbers from the User and find SUM of Positive Numbers only.
*/

#include<stdio.h>

main()
{
	int i,n,s=0;
	printf("\nEnter 10 numbers : ");
	for(i=0;i<10;i++)
	{
		printf("\nEnter number-%d : ",i+1);
		scanf("%d",&n);
		if(n<=0)
			continue;
		else	
			s+=n;
	}
	printf("\n\n\t\tSUM Of %d Positive-Numbers(s) : %d\n\n",i,s);
}
