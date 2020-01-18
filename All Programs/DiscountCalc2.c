//16.Program to calculate discount. If purchased amount is greater than or equal to 1000, discount is 5%. If purchased amount is less than 1000, discount is 3%.
#include<stdio.h>
#include<conio.h>
void main()
{
	int amount;
	printf("Enter the amount : ");
	scanf("%d",&amount);
	if(amount>=1000)
	printf("You have received 5%% discount.");
	else
	printf("You have received 3%% discount");
	getch();
}
