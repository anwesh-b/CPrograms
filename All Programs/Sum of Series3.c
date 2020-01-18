/*43.Program to find X of the following series for the given value of a and N.
X = a - a^2/2 + a^3/3 - a^4/4..................up to N.*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,N,i;
	float sum=0;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of N : ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2==0)
			sum-=pow(a,i)/i;
		else
			sum+=pow(a,i)/i;
	}
	printf("The sum of the series is %.2f",sum);
}
