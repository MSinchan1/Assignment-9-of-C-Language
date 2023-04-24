#include<stdio.h>
//Write a program in C to find the sum of left diagonals of a matrix.
int main()
{
    int i,j,n,sum=0; //declare four integers
    printf("Enter the size of the matrix:");//Enter the size of the matrix: 2
    scanf("%d",&n);
    int a[n][n];//declare an array with it's size 
    printf("Enter the elements of the matrix:\n");
    /*      this loop is for taken the input's from the user        */
    for(i=0;i<n;i++) //Used for no of rows in a matrix
    {
        for(j=0;j<n;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&a[i][j]);//1...2...3....4....5....6....7....8....9
        }
    }
    /*      this loop is used for the summation of the left diagonal*/
    for(i=0;i<n;i++) //Used for no of rows in a matrix
    {
        sum+=a[i][i]; //0+1...1+5......6+9
    }
    printf("Sum of left diagonal: %d",sum);// 15
    return 0;
}