#include <stdio.h>
#include "arraylib.h"

int findMaxIndex(int arr[], int size)
{
	int max;
    int a = 0;
	max=arr[0];
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
		{max=arr[i];
		a=i;
		}
	}
	return a;
}
int findMinIndex(int arr[], int size)
{
		 int min = arr[0];
        int a = 0; 
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
            min=arr[i];
		    a=i;
		}
	}
	return a;
}
float findAverage(int arr[], int size)
{
	float sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	sum=sum/size;
	return sum;
}
void displayArray(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}
void reverseArray(int arr[], int size)
{
	int temp;
	for(int i=0;i<size/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[size-1-i];
		arr[size-1-i]=temp;
	}
	
	
}
void sortArray(int arr[], int size)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		
		for (int j=i;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
	    temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
				
			}
		}
	}
}
int linearSearch(int arr[], int size, int value)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==value)
		{
			return 1;
		}
	}
	return 0;
}