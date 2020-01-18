//36.Program that displays the temperatures from 0 degrees Celsius to 100 degrees Celsius and their Fahrenheit equivalent.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	float farenheit;
	printf("\tCelsius\t\tFarenheit");
	for(i=0;i<=100;i++)
	{
		farenheit=(i*1.8)+32;
		printf("\n\t%d\t\t%.1f",i,farenheit);
	}
	getch();
}
