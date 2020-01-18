//55.A five digit positive integer is entered through the keyboard; write program using function to calculate the sum of the digits of the number. The function should receive the integer from main () and output also be printed through main ().
#include<stdio.h>
#include<conio.h>
int add(int n)
{
	int sum=0,a;
	do
	{
		a=n%10;
		n/=10;
		sum+=a;
	}
	while(n>0);
	return sum;
}
void main()
{
	int num,sum;
	printf("Enter a five digit positive integer : ");
	scanf("%d",&num);
	sum=add(num);
	printf("The sum of the digits of the number is %d",sum);
	getch();
}

