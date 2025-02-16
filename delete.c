#include<stdio.h>
int del(int *a, int n, int pos)
{
        int i;
        for(i=pos;i<n;i++)
        {
                a[i]=a[i+1];
        }
        for(i=0;i<n-1;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        return 0;
}
int main()
{
        int a[100],n,i,pos;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        printf("Enter the position of the element to be deleted: ");
        scanf("%d",&pos);
	pos=pos-1;
        del(a, n, pos);
}
