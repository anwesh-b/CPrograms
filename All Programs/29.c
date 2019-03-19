/*29.Given marks in five subjects. Write a program
(a) to display "PASS" or "FAIL" if assumed pass marks is 45 in each subject
(b) to find percentage of marks obtained
(c) to find division for "PASS" students assuming that 80% and above for "DISTINCTION" 60% and above for "FIRST DIVISION" otherwise "SECOND DIVISION".*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int maths,phy,cprog,dl,iit,percentage;
	printf("Enter the marks in Mathematics : ");
	scanf("%d",&maths);
	printf("Enter the marks obatined in Physics : ");
	scanf("%d",&phy);
	printf("Enter the marks obtained in C Programming : ");
	scanf("%d",&cprog);
	printf("Enter the marks obtained in Digital Logic : ");
	scanf("%d",&dl);
	printf("Enter the marks obtained in IIT : ");
	scanf("%d",&iit);
	percentage=(maths+phy+cprog+dl+iit)/5;
	if(maths<45||phy<45||cprog<45||dl<45||iit<45)
	{
		printf("FAIL");
		printf("\nPercentage = %d%%",percentage);
	}
	else
	{
		printf("PASS");
		printf("\nPercentage = %d%%",percentage);
		if(percentage>=80)
		printf("\nDISTINCTION");
		else if(percentage>=60)
		printf("\nFIRST DIVISON");
		else
		printf("\nSECOND DIVISON");
	}
	getch();
}
