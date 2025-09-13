#include<stdio.h>
void bubblesort(float arr[],float n);
void printArray(float arr[],float n);
int main()
{
	float i,n;
	printf("enter no of element=");
	scanf("%f",&n);
	
	int arr[n];
	printf("enter %f element \n");
	for(i=0 ;i<n;i++)
	{
		printf("enter no=");
		scanf("%f",&arr[i]);
	}
	bubblesort(arr,n);
	printf("sortingarray\n\n");
	printArray(arr,n);
	return 0;
}
void bubblesort(float arr[],float n)
{
	float i,j,temp,swapped;
	for(i=0;i<n-1;i++)
	{
		swapped = 0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		}
		if(swapped==0)
		break ;
	}
}
void printArray(float arr[],float n)
{
	float i;   
	for(i=0;i<n;i++)
	{
		printf("%d\n\n",arr[i]);
	}
}
