//61.Program to find Fibonacci series up to n terms using recursive function.
#include<stdio.h>
#include<conio.h>
void fibonaci(int n,int first,int second)
{
	int sum;
	if(n>1)
	{
		sum=first+second;
		first=second;
		second=sum;
		printf("%d\t",sum);
		fibonaci(n-1,first,second);
	}
	else
	printf("1\t");
};
void main()
{
	int n,first=0,second=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	fibonaci(n,first,second);
	getch();
}
