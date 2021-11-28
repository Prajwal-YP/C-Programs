// Write Program to Read Name and age of two persons and Display Elder Person Name.

#include<stdio.h>
const len=30;
main()
{
	char n1[len],n2[len];
	int a1,a2;
	
	printf("Enter Person-1\'s name.. : ");
	scanf("%[^\n]",&n1);
	printf("Enter Person-1\'s age... : ");
	scanf("%d",&a1);
	fflush(stdin);
	printf("Enter Person-2\'s name : ");
	scanf("%[^\n]",&n2);
	printf("Enter Person-2\'s age... : ");
	scanf("%d",&a2);
	
	if(a1>a2)
		printf("\n\t\'%s\' is the Elder person.",n1);
	else if(a2>a1)
		printf("\n\t\'%s\' is the Elder person.",n2);
	else
		printf("\n\tBoth \'%s\' and \'%s\' are of same age.",n1,n2);
}
