//79.Program to read two-dimensional matrix and display its transposed form.
#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[3][3],tr[3][3],i,j;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
			tr[j][i]=mat[i][j];
		}
	}
	printf("The matrix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of matix is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",tr[i][j]);
		}
		printf("\n");
	}
	getch();
}
