//4.Program to convert a temperature given in Celsius to Fahrenheit.
#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f;
	printf("Enter the temperature in Celsius");
	scanf("%f",&c);
	f=((c*9)/5)+32;
	printf("The temperature in farenheit is %.1f",f);
	getch();
}
