#include<stdio.h>
int main()
{
        int r1,c1,r2,c2,i,j;
        printf("Enter the no of rows and columns in matrix1: ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the no of rows and columns in matrix1: ");
        scanf("%d %d",&r2,&c2);
        if(r1!=r2 && c1!=c2)
        {
                printf("Matrix addition is not possible\n");
                return 1;
        }
        int a[r1][c1];
        printf("Enter elements of matrix1:");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        int b[r2][c2];
        printf("Enter elements of matrix2:");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        int c[r1][c2];
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
                        c[i][j]=0;
                }
        }
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                }
        }
        printf("Matrix1-Matrix2\n");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c2;j++)
                {
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}
