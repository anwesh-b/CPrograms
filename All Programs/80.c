//80.Program to convert a 4 × 4 matrix to upper triangular and display the result in matrix form.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[4][4],i,j,r;
	printf("Enter the elements of matrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<4;j++)
	{
		for (i=3;i>j;i--)
		{
			for (r=0;r<4;r++)
			{
				a[i][r]=a[i][r]-((a[i][j]/a[i-1][j])*a[i-1][r]);
			}
		}
	}
	printf("The operated matrix is\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
	getch();
}

