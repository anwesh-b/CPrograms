#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	for(a=1;a<=5;a++)
	{
		for(b=5;b>0;b--)
		{
			if(b<=a)
			printf("%d",b);
			else
			printf(" ");
		}
	printf("\n");
	}
	getch();
}
