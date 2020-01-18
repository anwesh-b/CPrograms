//35.Program to display first n natural numbers, their sum, and their average using all the three looping statements.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0,average;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("Using for loop.");
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
		sum+=i;
	}
	average=sum/n;
	printf("\nThe sum of the numbers is %d",sum);
	printf("\nThe average of the numbers is %d",average);
	printf("\n\nUsing while loop");
	i=1;
	sum=0;
	while(i<=n)
	{
		printf("\n%d",i);
		sum+=i;
		i++;
	}
	average=sum/n;
	printf("\nThe sum of the numbers is %d",sum);
	printf("\nThe average of the numbers is %d",average);
	printf("\n\nUsing do while loop");
	sum=0;
	i=1;
	do
	{
		printf("\n%d",i);
		sum+=i;
		i++;
	}
	while(i<=n);
	average=sum/n;
	printf("\nThe sum of the numebrs is %d",sum);
	printf("\nThe average of the nunmbers is %d",average);
	getch();
}
