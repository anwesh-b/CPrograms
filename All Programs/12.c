//12.Program to print a six digit integer in reverse order.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,a,rev=0;
	printf("Enter a six digit number:");
	scanf("%d",&num);
	do
	{
		a=num%10;
		rev=10*rev+a;
		num/=10;
	}
	while(num>0);
	printf("THe number in reverse order is %d",rev);
	getch();
}
