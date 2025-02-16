#include<stdio.h>
int trav(int *a, int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        return 0;
}
int main()
{
        int a[100],n,i,pos,num;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        trav(a, n);
}
