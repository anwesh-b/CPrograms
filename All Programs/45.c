//45.Program that computes the sum of the digits of the given integer number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int integ,sum=0,a;
	printf("Enter an integer number : ");
	scanf("%d",&integ);
	do
	{
		a=integ%10;
		sum+=a;
		integ/=10;
	}
	while(integ>0);
	printf("The sum of the digits is %d",sum);
	getch();
}
