//6.Program to find power of a given number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,pow,result,i;
	printf("Enter any number");
	scanf("%d",&num);
	printf("Enter the power of the number");
	scanf("%d",&pow);
	printf("%d ^ %d = ",num,pow);
	for(i=1;i<=pow;i++)
	{
		num*=i;
	}
	printf("%d",num);
	getch();
}
