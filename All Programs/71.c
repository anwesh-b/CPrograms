//71.Program to sort numbers stored in an array using bubble sort in descending order.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[8],temp,log,i,j;
	printf("Enter any 8 numbers:\n");
	for(i=0;i<8;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(arr[i]<arr[j])
			{
				log=arr[i];
				arr[i]=arr[j];
				arr[j]=log;
			}
		}
	}
	for(i=0;i<8;i++)
	printf("\n%d",arr[i]);
	getch();
}
