#include<stdio.h>

main()
{
	char ch;
	int d,u,l,s;
	d=u=l=s=0;
	
	printf("\n\t\t\t\t\t\tCOUNTER PROGRAM");
	printf("\n\t\t\t\t\t\t---------------");
	
	printf("\n\n");
	
	do
	{
		printf("\nEnter a input(0 to stop)\t:\t");
		fflush(stdin);
		scanf("%c",&ch);
		
		if(ch>=48 && ch<=57)
		{
			d++;
		}
		else if (ch>=97 && ch<=122)
			l++;
		else if (ch>=65 && ch<=90)
			u++;
		else
			s++;		
	}while(ch!=48);
	printf("\n\n\t\t--------------------------------");
	printf("\n\t\tDIGITS           :\t%d",d);
	printf("\n\t\tUPPER CASE       :\t%d",u);
	printf("\n\t\tLOWER CASE       :\t%d",l);
	printf("\n\t\tSPECIAL SYMBOLES :\t%d",s);
	printf("\n\t\t--------------------------------\n\n");
}
