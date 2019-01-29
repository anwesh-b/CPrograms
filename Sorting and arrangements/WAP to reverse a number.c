//WAP to reverse a number

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,r=0;
	printf("Enter any number");
	scanf("%d",&a);
	do
	{
		b=a%10;
		a/=10;
		r=10*r+b;
	}
	while(a>0);
	printf("The number in reverse is %d",r);
	getch();
}
