// Write a Program to accept marks of Any 3 subjects of your choice and perform the following:
//Calculate Total and Average and Display Grade Based on the Data Given Below
/*
Average Marks Grade
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Above 90% ---- A+
80-90% ---- A
70-80% ---- B+
60-70% ---- B
50-60% ---- C
Below 50% ---- F
*/

#include<stdio.h>
const len=20;
main()
{
	char s1[len],s2[len],s3[len];
	int m1,m2,m3;
	float t;
	
	printf("Enter Subject 1 name and marks : ");
	scanf("%[^\n]%d",&s1,&m1); 
	fflush(stdin);
	printf("Enter Subject 2 name and marks : ");
	scanf("%[^\n]%d",&s2,&m2); 
	fflush(stdin);
	printf("Enter Subject 3 name and marks : ");
	scanf("%[^\n]%d",&s3,&m3); 
	
	t=m1+m2+m3;
	
	if(m1>100 || m2>100 || m3>100)
		printf("\n\tIvalid marks....");
		else 
		{
			printf("\n%s = \'%d\' Marks",s1,m1);
			printf("\n%s = \'%d\' Marks",s2,m2);
			printf("\n%s = \'%d\' Marks",s3,m3);
			printf("\n\n\tTotal Marks is..... : %.0f",t);
			printf("\n\tAverage Marks is... : %.0f",t/3);
			printf("\n\tGrade scored is.... : ");
			t/=3;
			if(t>=90)
				printf("A+");
				else if(t>=80)
					printf("A");
					else if(t>=70)
						printf("B+");
						else if(t>=60)
							printf("B");
							else if(t>=50)
								printf("C");
								else 
									printf("F");
		}
}
