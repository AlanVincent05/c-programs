#include<stdio.h>
int insert(int *a, int n, int pos, int num)
{
	int i;
	for(i=n;i>=pos;i--)
        {
                a[i+1]=a[i];
        }
        a[pos]=num;
        for(i=0;i<=n;i++)
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
	printf("Enter the position of the element to be inserted: ");
	scanf("%d",&pos);
	pos=pos-1;
	printf("Enter the element to be inserted: ");
	scanf("%d",&num);
	insert(a, n, pos, num);
}
