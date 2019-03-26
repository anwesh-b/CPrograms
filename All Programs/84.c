//84.Program to add two 3 × 4 matrices and print the result in matrix form; use separate functions to take input and to add and display the result.
#include<stdio.h>
#include<conio.h>
int input()
{
	int x;
	scanf("%d",&x);
	return x;
};
void output(int x)
{
	printf("%d",x);
};
void main()
{
	int mat[3][4],i,j;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			mat[i][j]=input();
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			output(mat[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	getch();
}
