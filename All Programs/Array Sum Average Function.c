//83.Program to read n numbers in an array and display their sum and average; Use functions to read input and find sum and average.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int read(int *sum,int i)
{
	int x;
	scanf("%d",&x);
	*sum+=x;
	return x;
};
int avg(int sum,int n)
{
	int x;
	x=sum/n;
	return x;
}
void main()
{
	int *arr;
	int num,sum=0,avg,i;
	printf("Enter the value of n : ");
	scanf("%d",&num);
	arr=(int*)calloc(num,sizeof(int));
	for(i=0;i<num;i++)
	arr[i]=read(&sum,i);
	avg=avgr(sum,num);
	printf("\nThe sum of numbers in array is %d",sum);
	printf("\nThe average of the numbers is %d",avg);
	getch();
}
