//74.Write a program to read a line of text and delete all the vowels from it.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char log,text[100];
	printf("Enter a line of text : ");
	gets(text);
	for(i==0;i<(strlen(text));i++)
	{
		if(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u'||text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
		for(j=i;j<strlen(text);j++)
		{
			text[j]=text[j+1];
		}
	}
	printf("%s",text);
	getch();
}
