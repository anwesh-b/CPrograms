//40.Program to find the sum of the series 1x1 + 2x2+ 3x2 + 4x2+.....+nx2.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,n,i,sum=0;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i*pow(x,2);
	}
	printf("The sum of the series is %d",sum);
	getch();
}
