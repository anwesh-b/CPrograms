//WAP to print a left pyramid upto 5 blocks

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		printf("\n");
		for(b=n;b>0;b--)
		{
			if(b<=a)
			printf("%d",b);
			else
			printf(" ");
		}
	}
	getch();
}
