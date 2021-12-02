/*
	Program Name... : Greeting.c
	Author......... : Prajwal Y P
	Program Task... : To greet accoring to the time of the day. 
*/
#include<stdio.h>
main()
{
	char c;
	
	printf("Enter the day time( [M]orning / [A]fternoon / [Evening] / [N]ight ) : ");
	scanf("%c",&c);
	
	switch(toupper(c))
	{
		case 'M': printf("\n\tHey Good Morning !! Had Breakfast ?"); break;	
		case 'A': printf("\n\tHey Good Afternoon !! Had Lunch ?"); break;
		case 'E': printf("\n\tHey Good Evening !! Had Snacks ?"); break;
		case 'N': printf("\n\tHey Goodnight !! Had Dinner ?"); break;
		default : printf("\a\n\tPlease input the valid answer...!!!"); break;
	}
}
