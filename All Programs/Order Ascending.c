//87.Using pointer write a program to get n integer number and display them in ascending order (use malloc or calloc to reserve memory).
#include<stdio.h>
#include<conio.h>
int inpu()
{
	int x;
	scanf("%d",&x);
	return x;
};
void print(int x)
{
	printf("\n%d",x);
};
void main()
{
	int n,i,j,log;
	int *inte;
	printf("Enter the total no of integers : ");
	scanf("%d",&n);
	inte=(int *)calloc(n,sizeof(int));
	printf("Enter the integes:\n");
	for(i=0;i<n;i++)
	inte[i]=inpu();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(inte[j]>inte[i])
			{
				log=inte[j];
				inte[j]=inte[i];
				inte[i]=log;
			}
		}
	}
	for(i=0;i<n;i++)
	print(inte[i]);
	getch();
}
