#include<stdio.h>
int main()
{
    int i,j,num_of_rows,num_of_cols;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the number of rows and cols: ");
    scanf("%d %d",&num_of_rows,&num_of_cols);
    printf("Enter elements for A matrix\n");
    for(i=0; i<num_of_rows; i++)
    {
        for(j=0; j<num_of_cols; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //


    for(i=0; i<num_of_rows; i++)
    {
        for(j=0; j<num_of_cols; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //


    for(i=0; i<num_of_rows; i++)
    {
        for(j=0; j<num_of_cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    //
     printf("a = ");
    for(i=0; i<num_of_rows; i++)
    {
        printf("\t");
        for(j=0; j<num_of_cols; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nb = ");
    for(i=0; i<num_of_rows; i++)
    {
        printf("\t");
        for(j=0; j<num_of_cols; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    //
    printf("\n a + b = ");
    for(i=0; i<num_of_rows; i++)
    {

        for(j=0; j<num_of_cols; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
        printf("\t ");
    }

}

