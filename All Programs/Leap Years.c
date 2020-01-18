//50.Program to display all the leap years starting from 1900 to 2000.
#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("The leap year between 1900 and 2000 are:");
	for(year=1900;year<=2000;year++)
	{
		if(year%4==0)
		printf("\n%d",year);
	}
	getch();
}
