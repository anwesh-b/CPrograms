//47.Program to find factorial of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,fact=1,i;
	printf("Enter any number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("The factorial of the %d is %d",num,fact);
	getch();
}
