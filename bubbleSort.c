#include<stdio.h>
void bubbleSort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int swapped=0;
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				swapped=1;
			}
		}
		if(!swapped)
		{
			break;
		}
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
	bubbleSort(arr, n);
	printf("After sorting array elements\n");
	for(j=0;j<n;j++)
        {
                printf("%d\t",arr[j]);
        }
	printf("\n");
	return 0;
}
