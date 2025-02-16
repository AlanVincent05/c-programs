#include<stdio.h>
void selection(int a[], int n)
{
	int i,j,small;
	for(i=0;i<n-1;i++)
	{
		small=i;
		for(j=i+1;j<n;j++)
		if(a[j]<a[small])
			small=j;
		int temp=a[small];
		a[small]=a[i];
		a[i]=temp;
	}
}
void printArr(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
int main()
{
        int a[100],i,n;
        printf("How many elements: ");
        scanf("%d",&n);
        printf("Enter the elements of the array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	printf("Before sorting array elements are\n");
	printArr(a, n);
	selection(a, n);
	printf("\nAfter sorting array elements\n");
	printArr(a, n);
	return 0;
}
