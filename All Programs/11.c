//11. Program to find the rupee equivalent of U.S. dollars.
#include<stdio.h>
#include<conio.h>
void main()
{
	float rs,usd;
	printf("Enter the amount of money in Rs. : ");
	scanf("%f",&rs);
	usd=109.7*rs;
	printf("Rs %.2f = %.2f USD",rs,usd);
	getch();
}
