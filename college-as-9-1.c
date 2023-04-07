#include<stdio.h>
/*
1.	Write a program in C to store elements in an array and print it
*/
int main()
{
    int n,i;//INITIALIZING OF THE VARIABLE
    printf("Enter the size of the array: "); //NO OF ELEMENTS: 
    scanf("%d",&n);//3
    int a[n]; //INITIALIZING THE ARRAY
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");//ENTER DIGITS:
        scanf("%d",&a[i]);//1....3....4....
    }
    for(i=0;i<n;i++)
    {
        printf("Stored elemnts in array is: %d\n",a[i]);//1....2....4
    }
    return 0;
}