#include<stdio.h>
int binarySearch(int arr[], int size, int key)
{
	int low=0,high=size-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]==key)
			return mid+1;
	else if(arr[mid]<key)
		low=mid+1;
	else
		high=mid-1;
	}
	return -1;
}
int main()
{
	int arr[100],size,key;
	printf("Enter the number of elements: ");
	scanf("%d",&size);
	printf("Enter the elements:\n");
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("Enter the element to be found: ");
	scanf("%d",&key);
	int result=binarySearch(arr, size, key);
	if(result!=-1)
	{
		printf("The element %d is found at position %d.",key,result);
	}
	else
	{
		printf("Result not found.");
	}
	return 0;
}
