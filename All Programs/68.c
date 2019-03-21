//68.Program to search an element in array using sequential search.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,search,count=0;
	int *arr;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	printf("Enter the values of array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\nEnter the value you want to search : ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			count++;
			printf("\n%d is located in %d",search,i+1);
		}
	}
	if(count==0)
	printf("%d is not present",search);
	getch();
}
