//53.Program to find greater number between two numbers using function.
#include<stdio.h>
#include<conio.h>
void greater(int x, int y)
{
	if(x==y)
	printf("Both of the number are equal");
	else if(x>y)
	printf("%d is greater than %d",x,y);
	else
	printf("%d is gerater than %d",y,x);
}
void main()
{
	int firstnum,secondnum,big;
	printf("Enter first number : ");
	scanf("%d",&firstnum);
	printf("Enter second number : ");
	scanf("%d",&secondnum);
	greater(firstnum,secondnum);
	getch();
}
