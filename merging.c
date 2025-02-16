#include<stdio.h>
int main()
{
        int p,q,m,n,c;
	int array1[100],array2[100],array3[200];
	printf("Wnter the no of elemnts in array1: ");
		scanf("%d",&p);
	printf("Enter the elements: \n");
	for(m=0;m<p;m++)
		scanf("%d",&array1[m]);
	printf("Wnter the no of elemnts in array2: ");
                scanf("%d",&q);
	printf("Enter the elements: \n");
        for(n=0;n<q;n++)
                scanf("%d",&array2[n]);
	c=0;
	m=0;
	n=0;
	while((m<p)&&(n<q))
	{
		if(array1[m]<=array2[n])
			array3[c]=array1[m++];
		else
			array3[c]=array2[n++];
		c++;
	}
	while(m<p)
	{
		(array3[c]=array2[m]);
		c++;
		m++;
	}
	printf("Merged array in ascending order\n");
	for(m=0;m<c+1;m++)
		printf("%d\t",array3[m]);
}
