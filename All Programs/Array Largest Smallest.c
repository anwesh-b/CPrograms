//67.Write a program to display largest and smallest number among 10 numbers stored in an array.
#include<stdio.h>
#include<conio.h>
void main()
{
	int num[10],i,largest,smallest;
	printf("Enter the 10 numbers of array :\n");
	for(i=0;i<10;i++)
	scanf("%d",&num[i]);
	largest=num[0];
	smallest=num[0];
	for(i=1;i<10;i++)
	{
		if(largest<num[i])
		{largest=num[i];}
		if(smallest>num[i])
		{smallest=num[i];}
	}
	printf("\nThe largest number is %d",largest);
	printf("\nThe smallest number is %d",smallest);
}
