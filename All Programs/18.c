//18.Program to check whether a number is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	if(num%2==0)
	printf("%d is even",num);
	else
	printf("%d is odd",num);
	getch();
}
