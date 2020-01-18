//37.Program to calculate sum of first 10 even number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,sum=0,count=0;
	while(count<10)
	{
		if(i%2==0)
		{
			sum+=i;
			count++;
		}
		i++;
	}
	printf("The sum of first 10 even numbers is %d",sum);
	getch();
}
