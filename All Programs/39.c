//39.Program to determine the sum of the harmonic series (1+ 1/2 + 1/3 + 1/4 + ... + 1/n) for a given value of n.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float i,sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=(1/i);
	}
	printf("The sum is %.2f",sum);
	getch();
}
