//76.Program to add two 3×2 matrices and print the result in matrix form.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[3][2],b[3][2],sum[3][2];
	printf("Enter the elements of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Enter the elements of second matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		printf("%d\t",a[i][j]);
		for(j=0;j<2;j++)
		printf("%d\t",b[i][j]);
		printf("\t");
		for(j=0;j<2;j++)
		printf("%d\t",sum[i][j]);
		printf("\n");
	}
	getch();
}
