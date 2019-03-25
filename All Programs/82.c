//82.Program to multiply two rectangular matrices and display the resultant matrix.
#include<stdio.h>
#include<conio.h>
void main()
{
	int first[3][3],second[3][3],mul[3][3],i,j,k,sum;
	printf("Enter elements of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&first[i][j]);
		}
	}
	printf("Enter the elements of second matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&second[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=0;
			for(k=0;k<3;k++)
			{
				sum+=first[i][k]+first[k][j];
			}
			mul[i][j]=sum;
		}
	}
	printf("The multiplication of matrix gives:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
