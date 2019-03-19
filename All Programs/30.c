//30.Write a program using switch statement to display EXCELLENT, VERY GOOD, GOOD, SATISFACTORY, or FAIL if the user enters A, B, C, D, or E respectively.
#include<stdio.h>
#include<conio.h>
void main()
{
	char grade;
	printf("Enter the grade obtained : ");
	scanf("%c",&grade);
	switch(grade)
	{
		case 'A':case 'a':
			printf("EXCELLENT");
			break;
		case 'B':case 'b':
			printf("VERY GOOD");
			break;
		case 'C':case 'c':
			printf("GOOD");
			break;
		case 'D':case 'd':
			printf("SATISFACTORY");
			break;
		case 'E':case 'e':
			printf("FAIL");
			break;
		default:printf("You entered wrong grade.");
	}
	getch();
}
