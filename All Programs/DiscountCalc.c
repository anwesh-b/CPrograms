//15.Program to calculate discount. If purchased amount is greater than or equal to 1000, discount is 5%.
#include<stdio.h>
#include<conio.h>
void main()
{
	int amount,discount;
	printf("Enter the amount : ");
	scanf("%d",&amount);
	if(amount>=1000)
	printf("The discount is 5%%");
	else
	printf("Sorry! You donot have any discount.");
}
