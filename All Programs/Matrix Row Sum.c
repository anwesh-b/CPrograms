//78.Program to read 4 × 4 matrix and find sum of each row.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,matrix[4][4],sum[4]={0,0,0,0};
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&matrix[i][j]);
			sum[i]+=matrix[i][j];
		}
	}
	printf("\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\tsum = %d\n",sum[i]);
	}
	getch();
}
