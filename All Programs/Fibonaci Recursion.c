//60.Program to find nth Fibonacci number using recursive function.
#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
	if(n<=2)
	return 1;
	else 
	return fibo(n-1)+fibo(n-2);
};
void main()
{
	int n,num;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	num=fibo(n);
	printf("The %dth Fibonacci number is %d",n,num);
	getch();
}
