//69.	Program to search an element in array using binary search.
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[8]={2,3,4,7,9,13,15,18},search,first,last,mid;
	printf("arr={2,3,4,7,9,13,15,18}");
	printf("\nEnter the element to search : ");
	scanf("%d",&search);
	first=0;
	last=8;
	mid=(first+last)/2;
	while(first<=last)
	{
		if(arr[mid]==search)
		{
			printf("%d is in %d",search,mid+1);
			break;
		}
		else if(arr[mid]>search)
		{
			last=mid;
			mid=(first+last)/2;
		}
		else 
		{
			first=mid;
			mid=(first+last)/2;
		}
	}
	getch();
}
