#include<stdio.h>
//Write a program in C for multiplication of two square Matrices.
int main()
{
    int n,i,j,k,sum; //declare five variables
    printf("Enter the size of the matrices: "); //enter the size of an array:  3
    scanf("%d",&n);
    int m1[n][n],m2[n][n];// declare three 2-d matrices and defined their sizes 
    /*      this loop is for taken the input's from the user  for first matrix      */
    printf("Enter the elements of first matrix:\n");
    /*first element of 2 d matrix indicates row no ad second elemnt indicates column no */
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m1[i][j]);//1....2.....3.....4
        }
    }
     /*      this loop is for taken the input's from the user  for second matrix      */
     printf("Enter the elements of second matrix:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m2[i][j]);//5.....6.....7.....8
        }
    }
    printf("Multiplication result is:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            sum=0;
            for(k=0;k<n;k++)//used for multiplication of elements work
            {
                sum+=m1[i][k]*m2[k][j]; //0+1*5....5+2*7 and so on...................
            }
           printf("%d      ",sum);//19.....22......43.................
           
        }
        printf("\n");
    }
    return 0;
}