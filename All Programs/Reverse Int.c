//44.Given an integer, write a program to reverse and print it.
#include<stdio.h>
#include<conio.h>
void main()
{
	int inte,rev,a;
	printf("Enter any integer : ");
	scanf("%d",&inte);
	do
	{
		a=inte%10;
		inte/=10;
		rev=(rev*10)+a;
	}
	while(inte>0);
	printf("The number in reverse is %d",rev);
}
