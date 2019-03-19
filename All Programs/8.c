//8.Program to find area and perimeter of a rectangle.
#include<stdio.h>
#include<conio.h>
void main()
{
	int leng,br,area,peri;
	printf("Enter the length of the rectangle : ");
	scanf("%d",&leng);
	printf("Enter the breadth of the rectangle : ");
	scanf("%d",&br);
	area=leng*br;
	peri=2*(leng+br);
	printf("The area is %d",area);
	printf("\nThe perimeter is %d",peri);
	getch();
}
