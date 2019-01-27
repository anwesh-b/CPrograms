//WAP to print a normal pyramid with an input from user 

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;	//taking 3 integer variables a and b for for loop and n for the input from user
	printf("Enter any number:\n");
	scanf("%d",&n);		//take the maximum block of pyramid
	for(a=1;a<=n;++a)	//determining the no of rows upto n 
	{
		printf("\n");	//goes to next line
		for(b=1;b<=a;b++)	//determing the value of column upto the value of row
		{
			printf("%d",b);	//printing the value of b
		}
	}
	getch();	//hold the screen
}
