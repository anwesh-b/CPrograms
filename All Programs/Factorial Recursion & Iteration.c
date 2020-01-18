//56.Program to calculate factorial of a number using recursive function and the same program without using recursive function.#
#include<stdio.h>
#include<conio.h>
int factrec(int n)
{
	if(n<=1)
	return 1;
	else
	return n*factrec(n-1);
};
int factnorec(int n)
{
	int i,ans=1;
	for(i=1;i<=n;i++)
	ans*=i;
	return ans;
};
void main()
{
	int num,fact;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("nFactorial using recursion.\n");
	fact=factrec(num);
	printf("The factorial is %d",fact);
	printf("\n_______________________________________________\n");
	printf("\nFactorial without using recursion.\n");
	fact=factnorec(num);
	printf("The factorial is %d",fact);
	getch();
}
