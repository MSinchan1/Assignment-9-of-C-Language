#include<stdio.h>
//Write a program in C to print or display the lower triangular of a given matrix. 
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
    printf("Lower triangular matrix is:\n");
    /* this loop is used for the printing of lower triangular matrix*/
    for(i=0;i<n;i++)//used for no of rows
    {
        for(j=0;j<i;j++)// used for no of columns
        {
            printf("%d    ",a[i][j]); //1       4......5        7......8.....9
        }
        printf("\n");
        printf("\n");
    }
    return 0;
}