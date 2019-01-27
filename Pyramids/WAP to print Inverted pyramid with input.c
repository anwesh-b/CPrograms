//WAP to print a inverted pyramid by taking an input from user
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter any number:\n");
	scanf("%d",&a);
	for(a;a>0;a--)
	{
		printf("\n");
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
	}
	getch();
}
