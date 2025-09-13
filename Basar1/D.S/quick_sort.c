#include<stdio.h>
void swap(int *a ,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
	int partition(int arr[],int low,int high)
{
	int j;
	int pivot = arr[high];
	int i=low-1;
	for(j = low ;j < high ;j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
		swap(&arr[i+1],&arr[high]);
		return (i+1);
}
	void quicksort(int arr[],int low,int high)
	{
		if(low < high)
		{
			int pi =partition(arr,low,high);
			quicksort(arr,low,pi-1);
			quicksort(arr,pi+1,high);
		}
	}
	void printArray(int arr[],int n)
	{
		int i;
		for(i = 0 ;i < n ;i++)
		{
			printf("%d\n\n",arr[i]);
		}
	}

int main()
{
	int n,i;

	printf("enter no element=");
	scanf("%d",&n);
	int arr[n];
	for(i = 0 ;i < n ; i++)
	{
		printf("enter no=");
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printf("sorted Array \n\n");
	printArray(arr,n);
	return 0;
} 
