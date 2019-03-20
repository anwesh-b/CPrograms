//46.Given an integer, write a program to check it for palindrome.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n,rev=0,a;
	printf("Enter any number : ");
	scanf("%d",&num);
	n=num;
	do
	{
		a=n%10;
		rev=rev*10+a;
		n/=10;
	}
	while(n>0);
	if(rev==num)
	printf("The number is palindrome.");
	else
	printf("The number is not palindome.");
	getch();
}
