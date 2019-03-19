/*25.	A bank accepts deposits for one year or more and the policy it adopts on interest rate is as follows:
a) If a deposit is less than Rs. 1,000 and for 2 or more years the interest rate is 5 percent compounded annually.
b) If a deposit is Rs. 1,000 or more but less than Rs. 5,000 and for 2 or more years the interest rate is 7 percent compounded annually.
c) If a deposit is more than Rs. 5,000 and is for 1 year or more the interest rate is 8 percent compounded annually.
d) On all deposits for 5 years or more interest is 10 percent compounded annually
e) On all other deposits not covered by the above conditions the interest is 3 percent compounded annually.
At the time of withdrawal a customer data is given with the amount deposited and the number of years the money has been with the bank. Write a program to obtain the money in the customer's account and the interest credited at the time on withdrawal. */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int deposit,time,rate;
	float ci,amount;
	printf("Enter the total deposit : ");
	scanf("%d",&deposit);
	printf("Enter the time : ");
	scanf("%d",&time);
	if(time>=5)
	rate=10;
	else if(time>=1&&deposit>=5000)
	rate=8;
	else if(time>=2&&deposit>=1000&&deposit<5000)
	rate=7;
	else if(time>=2&&deposit<1000)
	rate=5;
	else
	rate=3;
	ci=deposit*((pow(1+(rate*0.01),time))-1);
	amount=ci+deposit;
	printf("The compound interest is %.2f",ci);
	printf("\nThe compound amount is %.2f",amount);
	getch();	
}
