//58.Program to find sum of first n natural numbers using recursive function.
#include<stdio.h>
#include<conio.h>
int sumn(int n)
{
	if(n<=1)
	return 1;
	else
	return n+sumn(n-1);
};
void main()
{
	int n,sum;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	sum=sumn(n);
	printf("Sum of first %d natural number is %d",n,sum);
	getch();
}
