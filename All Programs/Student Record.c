/*91.	Program to read 100 students record with following fields and display the record of B.Sc. IT faculty only.
Roll No.		Name		Faculty	 DOB(date of birth
							dd	mm	yy*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct info{
	char name[30];
	int roll_no;
	struct dob{
		int dd;
		int mm;
		int yy;
	}year;
}inf[100];
void main(){
	struct info data;
	int i;
	for(i=0;i<100;i++)
	{
		clrscr();
		printf("\nEnter name of student");
		scanf("%s",&inf[i].name);
		printf("\nEnter your roll number:");
		scanf("%d",&inf[i].roll_no);
		printf("\nEnter your DOB-dd");
		scanf("%d",&inf[i].year.dd);
		printf("\nEnter your DOB-mm");
		scanf("%d",&inf[i].year.mm);
		printf("\nEnter your DOB-yy");
		scanf("%d",&inf[i].year.yy);
	}
	printf("\n\nRoll No\t\tName of Student\t\tDate Of Birth\n\t\t\t\t\tdd\tmm\tyy");
	for(i=0;i<100;i++)
	{
		printf("\n%d\t\t%s\t\t%d\t%d\t%d",inf[i].roll_no,inf[i].name,inf[i].year.dd,inf[i].year.mm,inf[i].year.yy);
	}
	getch();
}


