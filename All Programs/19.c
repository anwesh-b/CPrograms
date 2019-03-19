/* 19.	Program to calculate the simple interest.
a) If balance is greater than 99999, interest is 7 %.
b) If balance is greater than or equal to 50000 and less than 100000 interest is 5 %.
c) If balance is less than 50000, interest is 3%. */

#include<stdio.h>
#include<conio.h>
void main()
{
	int principal,rate,x,time;
	float si;
	printf("Enter the principle : ");
	scanf("%d",&principal);
	printf("Enter the time : ");
	scanf("%d",&time);
	if(principal>99999)
	rate=7;
	else if(principal>=50000&&principal<10000)
	rate=5;
	else
	rate=3;
	x=principal*rate*time;
	si=x/100;
	printf("The simple interest is %.2f",si);
}

