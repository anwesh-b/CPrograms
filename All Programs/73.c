//73.Program to read a string and count the number of vowels and consonants in it.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,vowel=0,consonant=0;
	char str[50];
	printf("Enter a string : ");
	scanf("%s",&str);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='a'|str[i]=='e'|str[i]=='i'|str[i]=='o'|str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		vowel++;
		else
		consonant++;
	}
	printf("\nThere are %d vowel.",vowel);
	printf("\nThere are %d consonant.",consonant);
	getch();
}
