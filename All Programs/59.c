//59.Program to find product of first n natural numbers using recursive function.
#include<stdio.h>
#include<conio.h>
int product(int n)
{
	if(n<=1)
	return 1;
	else 
	return n*product(n-1);
}
void main()
{
	int n,prod;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	prod=product(n);
	printf("The product of first %d natural number is %d",n,prod);
	getch();
}
