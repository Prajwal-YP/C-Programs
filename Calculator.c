/*
	Program Name.. : Calculator.c
	Author........ : Prajwal Y P
	Program Task.. : A option based calculator using "multiple if", "Nested if" and "Logical Operators"
*/

#include<stdio.h>
main()
{
	int a,b,o;
	float r;
	a=b=o=r=0;
	
	printf("\t\tMain-Menu\n\t\t~~~~~~~~~\n\n1.Addiction\n2.Subctraction\n3.Multiplication\n4.division\n5.Remainder\n6.Square\n7.Cube\n8.exit");
	printf("\n\tEnter option : ");
	scanf("%d",&o);
	
	if( (o>0) || (o<9) )
	{
		if( (o==6) || (o==7) )
		{
			printf("\n\nEnter a number : ");
			scanf("%d",&a);
		}
		else if(o!=8)
		{
			printf("\n\nEnter two Numbers : ");
			scanf("%d%d",&a,&b);
		}
	}
	else 
	{
		printf("\n\n\aInvalid Option !!");
		exit(0);
	}
	
	if(o==1)
		r=a+b;
	else if(o==2)
		r=a-b;
	else if(o==3)
		r=a*b;
	else if(o==4)
		r=(float)a/b;	
	else if(o==5)
		r=a%b;
	else if(o==6)
	{
		r=a*a;	
	}
	else if(o==7)
	{
		r=a*a*a;	
	}
	else
	{
		printf("\n\nProgram Terminated .");
		exit(0);
	}
	
	
	printf("\n\nResult : %.2f",r);
	
}
