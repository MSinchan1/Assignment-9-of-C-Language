#include<stdio.h>
//Write a program in C to find transpose of a given matrix.
int main()
{
    int r,c,i,j; //declare  four integers
    printf("Enter the no of rows and columns of the matrix: "); //2     3
    scanf("%d%d",&r,&c);
    int a[r][c]; //declare a 2-d array and define it's size
    printf("Enter the elements of the matrix:\n");
    /*      this loop is for taken the input's from the user        */
    for(i=0;i<r;i++) //Used for no of rows in a matrix
    {
        for(j=0;j<c;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&a[i][j]);//1...2...3....4....5.....6
        }
    }
    printf("Transpose of the given matrix is:\n");
    /*  this loop is for the printing of the transpose of the given matrix     */
    for(i=0;i<c;i++)//this loop goes up to no of columns
    {
        for(j=0;j<r;j++)//this loop goes upto no of rows
        {
            printf("%d      ",a[j][i]);//1.....4        2.....5         3.....6
        }
        printf("\n");
    }
    return 0;
}