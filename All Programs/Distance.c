//14.Program to express a length given in kilometers in meters, centimeters, and millimeters.
#include<stdio.h>
#include<conio.h>
void main()
{
	int km,m,cm,mm;
	printf("Enter the length in kilometers : ");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	printf("%d km = %d m",km,m);
	printf("\n%d km = %d cm",km,cm);
	printf("\n%d km = %d mm",km,mm);
	getch();
}
