/*21.	A leap year should meet the following condition:
a) For non-century years it should be exactly divisible by 4.
b) For century years it should be exactly divisible 400. */

#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%4==0&&year%400==0)
	printf("The year is century leap year.");
	else if(year%4==0)
	printf("The year is non-century leap year.");
	else
	printf("The year is not leap year.");
	getch();
}

