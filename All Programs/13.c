//13.Program to sum the digits of a positive integer which is 5 digits long.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,a;
	printf("Enter any number : ");
	scanf("%d",&num);
	do
	{
		a=num%10;
		num/=10;
		sum+=a;
	}
	while(num>0);
	printf("The sum of all digits is %d",sum);
	getch();
}
