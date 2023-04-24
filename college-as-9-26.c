#include<stdio.h>
//Write a program in C to print or display upper triangular matrix
int main()
{
    int i,j,n; // declare four integers
    printf("Enter the size of the matrix: "); // enter the size of the matrix 3
    scanf("%d",&n);
    int a[n][n];//declare an 2-d array with its size
    printf("Enter the elements of the matrix:\n");
    /*      this loop is used for the input's taken from the user*/
    for(i=0;i<n;i++) //used for no of rows of matrix
    {
        for(j=0;j<n;j++) // used for no of columns of matrix
        {
            scanf("%d",&a[i][j]);//1...2....3....4....5....6....7....8....9
        }
    }
    printf("upper triangular matrix is:\n");
    /* this loop is used for the printing of upper triangular matrix*/
    for(i=0;i<n;i++)//used for no of rows
    {
        for(j=0;j<n;j++)// used for no of columns of matrix
        {
            if(i>j) //at i=1 & j=0......at i=2 & j=1.....2  and so on  
            {
                printf("      "); 
            }
            else 
            {
                printf("%d     ",a[i][j]);//1....2....3         5.....6             9
            }
        }
        printf("\n");
    }
    return 0;
}