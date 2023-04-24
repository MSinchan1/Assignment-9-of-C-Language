#include<stdio.h>
//Write a program in C to find sum of rows an columns of a Matrix
int main()
{
    int i,j,r,c,sum; //declare five integers
    printf("Enter no of rows and colums of the matrix:");//enter the no of rows and columns of the matrix 3   2
    scanf("%d%d",&r,&c);
    int a[r][c]; //declare an 2-d array with it's size 3 and 2
    printf("Enter the elements of the matrix:\n");
    /*      this loop is for taken the input's from the user        */
    for(i=0;i<r;i++) //Used for no of rows in a matrix
    {
        for(j=0;j<c;j++)//used for no of coloums in a matrix
        {
            scanf("%d",&a[i][j]);//1...2...3....4....5....6....7....8....9
        }
    }
    /*      this loop is used for find the sum of the elements rows*/
    for(i=0;i<r;i++) //Used for no of rows in a matrix
    {
        sum=0;
        for(j=0;j<c;j++)//used for no of coloums in a matrix
        {
            sum+=a[i][j]; //0+1+2......0+3+4......0+5+6
        }
        printf("Sum of Row %d: %d",i+1,sum); //3....7....11
        printf("\n");
    }
    /*      this loop is used for find the sum of the elements columns      */
    for(i=0;i<c;i++) //Used for no of rows in a matrix
    {
        sum=0;
        for(j=0;j<r;j++)//used for no of coloums in a matrix
        {
            sum+=a[j][i]; //0+1+3+5........0+2+4+6
        }
        printf("Sum of column %d: %d",i+1,sum); //9....12
        printf("\n");
    }
    return 0;
}