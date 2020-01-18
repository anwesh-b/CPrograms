/*23.	Rates of tax on gross salary are as shown below:
Income									Tax
Less than 10,000						Nill
Rs. 10,000 to 19,999					10%
Rs. 20,000 to 39,999					15%
Rs. 40,000 to above						20% 
Write a program to compute the net salary after deducting the tax for the given information.*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int income,net;
	printf("Enter your income.");
	scanf("%d",&income);
	if(income<10000)
	{
		printf("\nYou donot need to pay tax");
		printf("\nNet income = %d",income);
	}
	else if (income>=10000&&income<=19999)
	{
		printf("\nYou need to pay 10%% tax");
		net=income-(income/10);
		printf("\nNet income = %d",net);
	}
	else if (income>=20000&&income<=39999)
	{
		printf("\nYou need to pay 15%% tax");
		net=income-(15*income/100);
		printf("\nNet income = %d",net);
	}
	else 
	{
		printf("\nYou need to pay 20%% tax");
		net=income-(income/5);
		printf("\nNet income = %d",net);
	}
	getch();
}
