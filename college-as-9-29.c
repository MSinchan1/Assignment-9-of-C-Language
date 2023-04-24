#include<stdio.h>
//Write a program in C to accept two matrices and check whether they are equal
int main()
{
    int i,j,r,c,equality=1; //declare 5 integers
    printf("Enter number of rows and columns of  matrices: ");//entering no of rows and columns 3
    scanf("%d%d",&r,&c);
    int m1[r][c],m2[r][c];//declare two arrays with their size
    printf("Enter the elements of the first matrix:\n");
    /*      this loop is used for the inputs taken from the user for the first matrix*/
    for(i=0;i<r;i++)//used upto number of rows 
    {
        for(j=0;j<c;j++)// used upto number of columns
        {
            scanf("%d",&m1[i][j]);//1...2....3....4.....5....6...7....8...9
        }
    }
    printf("Enter the elements of the second matrix:\n");
    /*      this loop is used for the inputs taken from the user for the second matrix*/
    for(i=0;i<r;i++)// used upto number of rows
    {
        for(j=0;j<c;j++)// used upto number of columns
        {
            scanf("%d",&m2[i][j]);//1...3....2....4...5...6...7...8...9
        }
    }
    /* conditions for checking the quuitlity of the given matrices*/
    for(i=0;i<r;i++)// used upto number of rows
    {
        for(j=0;j<c;j++)// used upto number of columns
        {
           if(m1[i][j]!=m2[i][j])//1==1....2!=3
           {
            equality=0;
            break;
           } 
        }
    }
    if(equality==1)
    {
        printf("Given two matrices are equal");
    }
    else//0
    {
        printf("Given two matrics are not equal");
    }
    return 0;
}