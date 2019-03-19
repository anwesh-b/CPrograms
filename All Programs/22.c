//22. Write a program to check a year for leap.

#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year);
	if(year%4==0)
	printf("The year is leap year.");
	else
	printf("The year is not leap year.");
	getch();
}

