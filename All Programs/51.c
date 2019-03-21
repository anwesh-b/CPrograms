/* 51.	Write a program to display the following menu
a. To find area of circle
b. To check the given number is odd or even.
c. To find the sum of N numbers.
d. Exit.
Perform above task until the user wants to exit. */

#include<stdio.h>
#include<conio.h>
#define PI 3.14
void area(void)
{
	float rad,area;
	printf("Enter the radius : ");
	scanf("%f",&rad);
	area=PI*rad*rad;
	printf("The area of the circle is %.2f",area);
};
void oddoreven(void)
{
	int number;
	printf("Enter any number : ");
	scanf("%d",&number);
	if(number%2==0)
	printf("The number is even.");
	else
	printf("The number is odd.");
};
void sumofn(void)
{
	int n,i,sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("The sum of %d natural number is %d",n,sum);
};
void main()
{
	int final;
	char select,N='N';
	a:
	{system("cls");
	printf("\t\tMAIN MENU");
	printf("\na. To find area of circle");
	printf("\nb. To check the given number is odd or even.");
	printf("\nc. To find the sum of N numbers.");
	printf("\nd. Exit.");
	printf("\n\nSelect a menu : ");
	scanf("%s",&select);
	switch(select)
	{
		case 'a':
			area();
			break;
		case 'b':
			oddoreven();
			break;
		case 'c':
			sumofn();
			break;
		case 'd':
			exit(0);
		default:
			printf("You selected wrong input.");
			getch();
			goto a;
	}
	}
	printf("\nPress 1 to go to main menu.  ");
	scanf("%d",&final);
	if(final==1)
	goto a;
	getch();
}
