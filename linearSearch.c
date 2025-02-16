#include<stdio.h>
int linearSearch(int *arr, int n, int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n,j,key,arr[100];
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
                scanf("%d",&arr[j]);
	}
        printf("Enter the element to be found: ");
        scanf("%d",&key);
	int i=linearSearch(arr,n,key);
	if(i==-1)
	{
		printf("Key not found\n");
	}
	else
	{
		printf("Key found at position: %d\n",i+1);
	}
	return 0;
}
