//66.Twenty-five numbers are entered through the keyboard into an array; write a program find out how many of them are even and how many of them are odd.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num[25],even=0,odd=0;
	printf("Enter 25 numbers of the array :\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("There are %d odd numbers.",odd);
	printf("\nThere are %d even numbers.",even);
	getch();
}
