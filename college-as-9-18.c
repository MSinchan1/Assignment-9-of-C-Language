#include<stdio.h>
//Write a program in C for addition of two Matrices of same size.
int main()
{
    int n,i,j; //declare three variables
    printf("Enter the size of the matrices: "); //enter the size of an array:  3
    scanf("%d",&n);
    int m1[n][n],m2[n][n];// declare two 2-d matrices and defined their sizes 
    /*      this loop is for taken the input's from the user  for first matrix      */
    printf("Enter the elements of first matrix:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m1[i][j]);//1...2...3...4...5...6...7...8...9
        }
    }
     /*      this loop is for taken the input's from the user  for second matrix      */
     printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m2[i][j]);//9...8...7...6..5....4...3...2...1
        }
    }
     /*      this loop is for sum of first and second matrix      */
     printf("Summation of two marices:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            printf("%d      ",m1[i][j]+m2[i][j] );//1+9=10...2+8=10...3+7=10         4+6=10...5+5=10...6+4=10
            //     7+3=10..8+2=10....9+1=10
        }
        printf("\n");
    }
    return 0;
}