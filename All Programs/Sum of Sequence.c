//41.Program that calculates the sequence 1/1! + 2/2! + 3/3! +.....+ n/n!, Where n is the number of input by the user.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float i,j,sum=0,fact;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=1;
		for(j=1;j<=i;j++)
		{
			fact*=j;
		}
		sum+=i/fact;
	}
	printf("The sum of the series is %.2f",sum);
	getch();
}
