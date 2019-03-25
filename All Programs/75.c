//75.Program to check whether a given string is a palindrome or not.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char charac[100],rev[100];
	printf("Enter any string : ");
	scanf("%s",&charac);
	for(i=0;i<strlen(charac);i++)
		rev[i]=charac[strlen(charac)-i-1];
	if(strcmp(rev,charac)==0)
	printf("The string is palindrome.");
	else
	printf("The string is not palindrome.");
	getch();
}
