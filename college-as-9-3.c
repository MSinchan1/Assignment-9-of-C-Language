#include<stdio.h>
/*
Write a program in C to copy the elements of one array into another array.
*/
int main()
{
    int n,i;//INITIALIZING THE ARRAY
    printf("Enter the size of array: ");//ENTER NUMBER OF DIGITS
    scanf("%d",&n);//5
    int source[n],copy[n];//INITIALIZING THE ARRAY
    for(i=0;i<n;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&source[i]);//2....3....4....5....6
        copy[i]=source[i];//2.....3....4......5.....6
    }
    printf("Copied array from source: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",copy[i]);//2.....3.....4....5....6
    }
    return 0;
}