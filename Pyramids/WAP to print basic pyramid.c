//WAP to print a basic pyramid upto 5 blocks

#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	for(a=1;a<=5;++a)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
	if(a<5)
	printf("\n");
	}
	getch();
}
