//9.Program to find price of n mangos given the price of a dozen mangos.
#include<stdio.h>
#include<conio.h>
void main()
{
	int price,num,tot;
	price=100;
	printf("The price of one dozen mango = %d ",price);
	printf("\nEnter the no of mangoes you need.");
	scanf("%d",&num);
	tot=price*num/12;
	printf("The price of %d mangos is %d",num,tot);
	getch();
}
