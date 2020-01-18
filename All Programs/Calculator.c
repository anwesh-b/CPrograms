//32.Write a program using switch statement to develop a simple calculator for +, -, *, /, and % operators.
#include<stdio.h>
#include<conio.h>
void main()
{
	int firstnum,secondnum;
	char operat;
	printf("Enter first number : ");
	scanf("%d",&firstnum);
	printf("Enter the operator : ");
	scanf("%s",&operat);
	printf("ENter second number : ");
	scanf("%d",&secondnum);
	switch(operat)
	{
		case '+':
			printf("%d + %d = %d",firstnum,secondnum,firstnum+secondnum);
			break;
		case '-':
			printf("%d - %d = %d",firstnum,secondnum,firstnum-secondnum);
			break;
		case '*':
			printf("%d * %d = %d",firstnum,secondnum,firstnum*secondnum);
			break;
		case '/':
			printf("%d / %d = %d",firstnum,secondnum,firstnum/secondnum);
			break;
		case '%':
			printf("%d %% %d = %d",firstnum,secondnum,firstnum%secondnum);
			break;
		default:
			printf("Wrong operator entered.");
	}
	getch();
}
