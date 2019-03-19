//5.Program to find square root of a given number.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num;
	float sqrot;
	printf("Enter any number : ");
	scanf("%d",&num);
	sqrot=sqrt(num);
	printf("%.2f",sqrot);
	getch();
}
