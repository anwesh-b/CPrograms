//Program to Add, Subtract, Multiply and Divide

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,subtract,multiply,division;
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	add=a+b;
	subtract=a-b;
	multiply=a*b;
	division=a/b;
	printf("%d + %d = %d\n",a,b,add);
	printf("%d - %d = %d\n",a,b,subtract);
	printf("%d * %d = %d\n",a,b,multiply);
	printf("%d / %d = %d",a,b,division);
	getch();
}
