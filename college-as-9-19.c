#include<stdio.h>
//Write a program in C for subtraction of two Matrices.
int main()
{
    
    int n,i,j; //declare three variables
    printf("Enter the size of the matrces: "); //enter the size of two matrics:2 
    scanf("%d",&n);
    int m1[n][n],m2[n][n];// declare three 2-d matrices and defined their sizes 
    /*      this loop is for taken the input's from the user  for first matrix      */
    printf("Enter elements of first matrix:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m1[i][j]);//5....4...6....7
        }
    }
     /*      this loop is for taken the input's from the user  for second matrix      */
    printf("Enter elements of second matrix:\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&m2[i][j]);//1...2....3....4
        }
    }
     /*      this loop is for subtraction result of first and second matrix      */
     printf("Subtraction result of the two matrices\n");
    for(i=0;i<n;i++)//Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            printf("%d      ",m1[i][j]-m2[i][j]);//5-1=4...4-2=2       6-3=3.....7-4=3
        }
        printf("\n");
    }
    return 0;
}