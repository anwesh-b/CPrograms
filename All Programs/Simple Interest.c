//3.Program to find simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
	int p,t,r,x;
	float si;
	printf("Enter the principle : ");
	scanf("%d",&p);
	printf("Enter the time : ");
	scanf("%d",&t);
	printf("Enter the Rate of Interest : ");
	scanf("%d",&r);
	x=p*t*r;
	si=x/100;
	printf("\nThe simple interest is %.2f",si);
	getch();
}
