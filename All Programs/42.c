/*42.	program to display sum of the following series up to n terms.
Sum = x - x2 + x3- x4+....… */
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int n,x,i,sum=0;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		sum-=pow(x,i);
		else
		sum+=pow(x,i);
	}
	printf("The sum of the series is %d",sum);
	getch();
}
