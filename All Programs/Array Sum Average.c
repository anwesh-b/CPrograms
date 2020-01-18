//65.Program to read n numbers in an array and display their sum and average.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0,average;
	int *array;
	printf("Enter the size of array");
	scanf("%d",&n);
	array=(int*)calloc(n,sizeof(int));
	printf("Enter the array numbers :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
		sum+=array[i];
	}
	average=sum/n;
	printf("\nThe sum ofthe numbers is %d",sum);
	printf("\nThe average is %d",average);
	getch();
}
