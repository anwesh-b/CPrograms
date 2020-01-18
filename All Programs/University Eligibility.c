/*20.	Admission to a professional course is subject to the following conditions:
a)Marks in mathematics >= 60
b)Marks in physics >= 50
c)Marks in chemistry >= 40
d)Total in all three subjects >= 200
                                              OR
Total in mathematics and physics >=150
Write a program to process the applications to list eligible candidate */

#include<stdio.h>
#include<conio.h>
void main()
{
	int maths,phy,chem,tot;
	printf("Enter your marks in Mathematics : ");
	scanf("%d",&maths);
	printf("Enter your marks in Physics : ");
	scanf("%d",&phy);
	printf("Enter your marks in Chemistry : ");
	scanf("%d",&chem);
	if((maths>=60&&phy>=50&&chem>=40&&(maths+phy+chem)>=200)||(maths+phy>=150))
	printf("You are eligible for admission.");
	else
	printf("You are not eligible for the admission.");
	getch();
}
