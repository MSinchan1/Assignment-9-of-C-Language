#include<stdio.h>
//Write a program in C for a 2D array of size 3x3 and print the matrix.
int main()
{
    int a[3][3],i,j; //declare a two-d array and two integers
    /*      this loop is for taken the input's from the user        */
    for(i=0;i<=2;i++) //Used for no of rows in a matrix
    {
        for(j=0;j<=2;j++)//used for no of coloums in a matrix
        {
            printf("Enter element: "); //1...2...3....4....5....6....7....8....9
            scanf("%d",&a[i][j]);
        }
    }
    /*     this loop is used for the print the given elements in matrix form     */
    for(i=0;i<=2;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<=2;j++)//used for no of coloums in a matrix
        {
            printf("%d      ",a[i][j]); //1...2...3     4...5....6      7...8...9
        }
        printf("\n");
    }
    return 0;
}