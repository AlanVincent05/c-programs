#include<stdio.h>
//Insert an element
int insert(int *a)
{
        int pos,i,num;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter the position of the element to be inserted: ");
        scanf("%d",&pos);
        pos=pos-1;
        printf("Enter the element to be inserted: ");
        scanf("%d",&num);

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


//Delete an element
int del(int *a)
{
        int i,pos;
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter the position of the element to be deleted: ");
        scanf("%d",&pos);
        pos=pos-1;

        for(i=pos;i<n;i++)
        {
                a[i]=a[i+1];
        }
        for(i=0;i<=n-1;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        return 0;
}


//Print the array
int traverse(int *a)
{
        int i;
	int n=sizeof(a)/sizeof(a[0]);
        for(i=0;i<n;i++)
        {
                printf("%d\t",a[i]);
        }
        printf("\n");
        return 0;
}


//Merging two arrays
int merge(int *a)
{
	int num_a=sizeof(a)/sizeof(a[0]);
        int b[100],c[100],i,num_b;
        printf("Enter the number of elements to be entered: ");
        scanf("%d",&num_b);
        for(i=0;i<num_b;i++)
	{
                scanf("%d",&b[i]);
        }
	for(i=0;i<num_a;i++)
	{
		c[i]=a[i];
	}
	for(i=num_a;i<(num_a+num_b);i++)
	{
		c[i]=b[i-num_a];
	}
	printf("\n");
	for(i=0;i<(num_a+num_b);i++)
	{
	printf("%d\n",c[i]);
	}
	return 0;
}

//Enter the array
int main()
{
        int a[100],i,n,op;
        printf("Enter the number of elements: ");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	do
	{
		printf("1 for insert\n2 for delete\n3 for traverse\n4 for merge\n5 to exit\nEnter the operation: ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				insert(a);
				break;
			case 2:
				del(a);
				break;
			case 3:
				traverse(a);
				break;
			case 4:
				merge(a);
				break;
		}
	}while(op<5);
	return 0;
}
