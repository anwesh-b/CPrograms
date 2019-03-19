//7.Program to find area and circumference of circle.
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float radius,area,cir;
	printf("Enter the radius if the circle : ");
	scanf("%f",&radius);
	area=PI*radius;
	cir=2*PI*radius;
	printf("The area of circle with radius %.1f is %.1f",radius,area);
	printf("\nThe ciurcumference of circle with radius %.1f is %.1f",radius,cir);
	getch(); 
}
