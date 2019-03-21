//54.Program using function to calculate and return sum of following series up to n terms; where x and n are supposed as passed by main program; sum = x-x2 +x3-x4+..…
#include<stdio.h>
#include<conio.h>
#include<math.h>
void sum(int x,int n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		sum+=pow(x,i);
		else
		sum-=pow(x,i);
	}
	printf("The sum of the series is %d",sum);
};
void main()
{
	int x,n;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	sum(x,n);
	getch();
}
