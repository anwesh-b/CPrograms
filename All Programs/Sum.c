//38.Program to find out sum of all numbers completely divisible by 5 among n numbers given by the user.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,sum=0,count=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while(count<n)
	{
		if(i%5==0)
		{
			sum+=i;
			count++;
		}
		i++;
	}
	printf("The sum of %d number divisible by 5 is %d",n,sum);
	getch();
}
