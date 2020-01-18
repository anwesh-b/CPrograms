//26.program to print the largest number among three numbers input by the user.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter any three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	printf("%d is largest",a);
	else if(b>c)
	printf("%d is largest",b);
	else
	printf("%d is largest",c);
	getch();
}
