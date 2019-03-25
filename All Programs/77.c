//77.Program that accepts the elements of 3 × 3 matrix and calculate the sum of all elements of the matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,matrix[3][3],sum=0;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&matrix[i][j]);
			sum+=matrix[i][j];
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
	printf("The sum of all the elememts is %d",sum);
	getch();
}
