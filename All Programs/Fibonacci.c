//48.Program to obtain the first 25 numbers of Fibonacci series.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,next,first=0,second=1,sum=0;
	for(i=1;i<25;i++)
	{
		if(i<=1)
		next=i;
		else
		{
    		next=first+second;
    		first=second;
    		second=next;
    	}
    	sum+=next;
  	}
  	printf("The sum of first 25 number of Fibonaci series is %d",sum);
	getch();
}
