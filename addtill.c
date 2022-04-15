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
			break;
		else	
			s+=n;
	}
	printf("\n\n\t\tSUM : %d\n\n",s);
}
