/*17.	Program to calculate discount
a) If purchased amount is greater than or equal to 5000, discount is 10%
b) If purchased amount is greater than or equal to 4000 and less than 5000, discount is 7%
c) If purchased amount is greater than or equal to 3000 and less than 4000, discount is 5%
d) If purchased amount is greater than or equal to 2000 and less than 3000, discount is 3%
e) If purchased amount is less than 2000, discount is 2% */

#include<stdio.h>
#include<conio.h>
void main()
{
	int amount;
	printf("Enter the amount : ");
	scanf("%d",&amount);
	if(amount>=5000)
	printf("You have received 10%% discount.");
	else if (amount>=4000&&amount<5000)
	printf("You have received 7%% discount.");
	else if(amount>=3000&&amount<4000)
	printf("You have received 5%% discount.");
	else if(amount>=2000&&amount<3000)
	printf("You have received 3%% discount.");
	else
	printf("You have received 2%% discount.");
	getch();
}
