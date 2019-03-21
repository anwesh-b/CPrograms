//63.Write a program to calculate area and perimeter of a rectangle using macros.
#include<stdio.h>
#include<conio.h>
#define area(length,breadth) length*breadth
#define peri(length,breadth) 2*(length+breadth)
void main()
{
	int length,breadth;
	printf("Enter the length : ");
	scanf("%d",&length);
	printf("Enter the bradth : ");
	scanf("%d",&breadth);
	printf("\nArea = %d",area(length,breadth));
	printf("\nPerimeter = %d",peri(length,breadth));
	getch();
}
