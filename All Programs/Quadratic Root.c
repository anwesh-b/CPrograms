//27. Program to find the roots of a quadratic equation using discriminant.
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
	printf("Enter the coefficients a,b and c.\n");
	scanf("%f%f%f",&a,&b,&c);
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("root1=%.2f\nroot2=%.2f",root1,root2);
	}
	else if(discriminant==0)
	{
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2f",root1);
	}
	else
	{
		realpart=-b/(2*a);
		imaginarypart=sqrt(-discriminant)/(2*a);
		printf("root1=%.2f+%.2fi\nroot2=%.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);
	}
	getch();
	return 0;
}

