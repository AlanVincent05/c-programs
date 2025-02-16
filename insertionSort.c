#include<stdio.h>
void insertionSort(int arr[], int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
        int arr[100],i,n,j;
        printf("How many elements: ");
        scanf("%d",&n);
        printf("Enter the elements of the array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        insertionSort(arr, n);
        printf("After sorting array elements\n");
        for(j=0;j<n;j++)
        {
                printf("%d\t",arr[j]);
        }
        printf("\n");
        return 0;
}
