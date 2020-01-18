//90.Program to read 100 students record with fields (roll_no, name, class, and marks in 5 subjects) and display their records along with their percentage of marks obtained.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct info{
	char name[30];
	int roll_no;
	struct markofstu{
		int maths;
		int dl;
		int iit;
		int c;
		int phy;
	}marks;
}inf[100];
void main(){
	struct info data,log;
	int n,i,j,tot[100],per[100];
	for(i=0;i<100;i++)
	{
		clrscr();
		printf("\nEnter name of student");
		scanf("%s",&inf[i].name);
		printf("\nEnter your roll number:");
		scanf("%d",&inf[i].roll_no);
		printf("\nEnter your marks in Maths");
		scanf("%d",&inf[i].marks.maths);
		printf("\nEnter your marks in Digital Logic");
		scanf("%d",&inf[i].marks.dl);
		printf("\nEnter your marks in IIT");
		scanf("%d",&inf[i].marks.iit);
		printf("\nEnter your marks in C Programming");
		scanf("%d",&inf[i].marks.c);
		printf("\nEnter your makrs in Physics");
		scanf("%d",&inf[i].marks.phy);
		tot[i]=inf[i].marks.maths+inf[i].marks.dl+inf[i].marks.iit+inf[i].marks.c+inf[i].marks.phy;
		per[i]=tot[i]/5;
	}
	printf("\n\nRoll No\tName of Student\tMaths\tDL\tIIT\tC Prog\tPhysics\tPercentage");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t\t%d\t%d\t%d\t%d\t%d",inf[i].roll_no,inf[i].name,inf[i].marks.maths,inf[i].marks.dl,inf[i].marks.iit,inf[i].marks.c,inf[i].marks.phy,per[i]);
	}
	getch();
}

