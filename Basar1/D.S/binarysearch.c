#include<stdio.h>

int main()
{
	int arr[]={10,20,30,40,50};
	int size=sizeof(arr)/sizeof(arr[0]);
	int key=30;
	int binary;
	int result=binarysearch(arr,0,size-1,key);
	if(result != -1)
	{
		printf("element found=%d",result);
	}
	else
	{
		printf("element not found");	
	}
	return 0;
}
int binarysearch(int arr[],int left,int right,int key)
{
	while(left<=right)
	{
		int mid;
		mid=left+(right-left)/2;
		if(arr[mid-1]==key)
		{
			return mid;
		}
		if (arr[mid-1<key])
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return -1;
}
