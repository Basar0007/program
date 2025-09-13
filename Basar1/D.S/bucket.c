#include<stdio.h>
#include<stdlib.h>


#define MAX 10

struct Node
{
	float data;
	struct Node* next;
};
void bucketsort(float arr[],int n)
{
	int i;
	struct Node*buckets[max]={NULL};
	for(i=0;i<n;i++)
	{
		int bucketIndax=arr[i]*max;
		insertsorted(&buckets[bucketIndax],arr[i]);
	}
	int index=0;

	for(i=0;i<max;i++)
	{
		struct Node *current=buckets[i];
		while(current!=NULL)
		{
			arr[Index++]=current->data;
			struct Node *temp=current;
			current = current->next;
			free(temp);
		}
	}
}
void printArray(float arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%f\n\n",arr[i]);
	}
}
int main()
{
	int n,i;
	float arr[n];
	
	printf("enter no of element:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter no=");
		scanf("%f",&arr[n]);
	}
	
	bucketsort(arr,n);
	printf("sorted Array");
	printArray(arr,n);
	
	return 0;
}


