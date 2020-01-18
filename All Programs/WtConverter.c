//10. Program to convert pounds to kilograms.
#include<stdio.h>
#include<conio.h>
void main()
{
	float pound,kg;
	printf("Enter the weight in pounds : ");
	scanf("%f",&pound);
	kg=2.20462*pound;
	printf("The weight in kg is %.5f",kg);
	getch();
}
