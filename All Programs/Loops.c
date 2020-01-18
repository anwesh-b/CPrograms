//34.Program to display your name 10 times using all the three looping statements.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	printf("Using for loop:");
	for(i=0;i<10;i++)
	printf("\nAnwesh Budhathoki");
	printf("\n\nUsing while loop:");
	i=0;
	while(i<10)
	{
		printf("\nAnwesh Budhathoki");
		i++;
	}
	printf("\n\nUsing do while loop");
	i=0;
	do
	{
		printf("\nAnwesh Budhathoki");
		i++;
	}
	while(i<10);
	getch();
}
