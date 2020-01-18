// 24.	Jet Company gives 5% commission to its salesman if their monthly sales are less than Rs. 10,000 and a 10% commission if it is equal to or greater than Rs. 10,000. Write a program to calculate commission at the end of the month.
#include<stdio.h>
#include<conio.h>
void main()
{
	int sales;
	printf("Enter the total sales in the month : ");
	scanf("%d",&sales);
	if(sales<5000)
	printf("The comission this month is 5%%");
	else
	printf("The comission this month is 10%%");
	getch();
}
