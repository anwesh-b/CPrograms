//72.Program to read name list of 50 students and display them in alphabetical form.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	char name[50][100],temp[100];
	printf("Enter name of student: ");
	for(i=0;i<50;i++)
	scanf("%s",&name[i]);
	for(i=0;i<50;i++)
	{
		for(j=i;j<50;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				for(k=0;k<100;k++)
				{
					temp[k]=name[i][k];
					name[i][k]=name[j][k];
					name[j][k]=temp[k];
				}
			}
		}
	}
	printf("\nThe name of students are : ");
	for(i=0;i<50;i++)
	printf("\n%d. %s",i+1,name[i]);
	getch();
}
