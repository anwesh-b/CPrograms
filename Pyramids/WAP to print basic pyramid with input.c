#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,n;
	printf("Enter any number:\n");
	scanf("%d",&n);
	for(a=1;a<=n;++a)
	{
		printf("\n");
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
	}
	getch();
}
