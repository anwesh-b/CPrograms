//28.Program to compare two numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int firstnum,secondnum;
	printf("Enter any two numbers :\n");
	scanf("%d %d",&firstnum,&secondnum);
	if(firstnum==secondnum)
	printf("Both the number are equal.");
	else if(firstnum>secondnum)
	printf("%d is greater than %d",firstnum,secondnum);
	else
	printf("%d is greater than %d",secondnum,firstnum);
	getch();
}
