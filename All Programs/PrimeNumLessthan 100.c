//49.Program to display all prime numbers less than 100.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,count;
	for(i=1;i<100;i++)
	{
		count=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			count++;
		}
		if(count==1)
		printf("\n%d",i);
	}
	getch();
}
