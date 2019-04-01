//85.Program to swap two numbers using a function and by passing arguments as references.
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{
	int log;
	log=*x;
	*x=*y;
	*y=log;
};
void main()
{
	int first,second,log;
	printf("Enter any two numbers:\n");
	scanf("%d %d",&first,&second);
	printf("The numebrs are %d and %d");
	swap(&first,&second);
	printf("After swap.\nThe numbers are %d and %d",first,second);
	getch();
}
