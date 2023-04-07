#include<stdio.h>
/*
2. Write a program in C to find the sum of all elements of the array.
*/
int main()
{
    int n,i,sum=0;//INITIALIZING THE VARIABLE
    printf("Enter the size of array: ");//ENTER NO OF DIGITS
    scanf("%d",&n);//5
    int a[n];//INITIALIZING THE ARRAY WITH THE SIZE
    for(i=0;i<n;i++)
    {
        printf("Enter elements: ");//ENTER THE DIGITS
        scanf("%d",&a[i]);//1...2...3...4...5
        sum+=a[i];//0+1....1+2....3+3....6+4....10+5
    }
    printf("Sum of the digits stored in array is: %d",sum);//15
    return 0;
}