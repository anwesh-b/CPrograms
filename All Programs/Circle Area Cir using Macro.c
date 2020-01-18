//62.Write macros to compute area and circumference of circle and make a program to use this macro.
#include<stdio.h>
#include<conio.h>
#define PI 3.14 
#define area(r) PI*r*r
#define cir(r) 2*PI*r
void main()
{
	float r;
	printf("Enter the radius of the circle");
	scanf("%f",&r);
	printf("\nThe area of circle of radius %.1f is %.2f",r,area(r));
	printf("\nThe circumference of circle with radius %.1f is %.2f",r,cir(r));
	getch();
}
