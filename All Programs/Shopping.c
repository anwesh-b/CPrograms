/*33. A cloth showroom has announced the following seasonal discounts on purchase of items

Purchase amount							Discount
							Mill cloth				Handloom items
0 - 100							-						5%
101 - 200						5%						7.5%
201 - 300						7.5%					10%
Above 300						10%						15%
Write a program using switch and if statements to compute the net amount to be paid by a customer. */
#include<stdio.h>
#include<conio.h>
void main()
{
	int amountmill,amounthandloom,netmill,nethandloom;
	printf("Enter the amount of Mill CLoth items : ");
	scanf("%d",&amountmill);
	printf("Enter the amount of Handloom items : ");
	scanf("%d",&amounthandloom);
	if(amountmill<=100)
	netmill=amountmill;
	else if(amountmill<=200&&amountmill>100)
	netmill=amountmill-(amountmill/20);
	else if(amountmill<=300&&amountmill>200)
	netmill=amountmill-(7.5*amountmill/100);
	else
	netmill=amountmill-(amountmill/10);
	if(amounthandloom<=100)
	nethandloom=amounthandloom;
	else if(amounthandloom<=200&&amounthandloom>100)
	nethandloom=amounthandloom-(amounthandloom/20);
	else if(amounthandloom<=300&&amounthandloom>200)
	nethandloom=amounthandloom-(7.5*amounthandloom/100);
	else
	nethandloom=amounthandloom-(amounthandloom/10);
	printf("Total Price = %d",nethandloom+netmill);
	getch();
}

