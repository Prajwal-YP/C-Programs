#include<stdio.h>
main()
{
	char n[30];
	int a,b;
	a=b=0;
	
	printf("Enter your name College fresher............... :");
	scanf("%[^\n]",n);
	printf("Rate your interest in Coding/Programming ..... :");
	scanf("%d",&a);
	printf("Rate your interest in Webpage Development..... :");
	scanf("%d",&b);
	
	if(a>b)
		printf("\n\n\tHey %s, Start practising C Programming along with data structures.",n);
	else
		printf("\n\n\tHey %s, Start practising HTML and CSS.",n);
	
	printf("\nAll the best, Be consistent");
}
