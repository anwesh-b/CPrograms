//31.Program to display number of days in a month using switch statement.
#include<stdio.h>
#include<conio.h>
void main()
{
	int month;
	printf("Enter the code of the month as mentioned below: ");
	printf("\n1)January\t2)February\t3)March\n4)April\t\t5)May\t\t6)June\n7)July\t\t8)August\t9)September\n10)October\t11)November\t12)December\n : ");
	scanf("%d",&month);
	switch(month)
	{
		case 1:
			printf("You have 31 days.");
			break;
		case 2:
			printf("You have 28 days.");
			break;
		case 3:
			printf("You have 31 days.");
			break;
		case 4:
			printf("You have 30 days.");
			break;
		case 5:
			printf("You have 31 days.");
			break;
		case 6:
			printf("You have 30 days");
			break;
		case 7:
			printf("You have 31 days.");
			break;
		case 8:
			printf("You have 31 days.");
			break;
		case 9:
			printf("You have 30 days.");
			break;
		case 10:
			printf("You have 31 days.");
			break;
		case 11:
			printf("You have 30 days.");
			break;
		case 12:
			printf("You have 31 days.");
			break;
		default:
			printf("You entered wrong value.");
	}
	getch();
}
