#include<stdio.h>

main()
{
	int n,i,c=0;
	
	printf("\Enter Positive interger : ");
	scanf("%d",&n);
	
	if(n<=0)
	{
		printf("\n\t\tPLEASE INPUT POSITIVE NUMBER(S)");
		exit(0);
	}
	
	printf("\n\n\t\tFactors of %d are\t:\t",n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
			c++;
		}		
	}
	
	printf("\n\t\tTotal Number of Factors\t:\t%d\n\n",c);
}
