#include<stdio.h>
/*
Write a program in C to print all unique elements in an array
*/
int main()
{
    int n,i;//INITIALIZING THE VARIABLE
    printf("Enter number of digits: ");
    scanf("%d",&n);//5
    int a[n];//INITIALIZING THE ARRAY
    for(i=0;i<n;i++)//TO ENTERING THE DIGITS OF THE ARRAY
    {
        printf("Enter digit: ");//  1.....1.....1.....2....5
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)//FOR FINDOUT THE UNIQUE ELEMNTS
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]!=a[j])//CHECK THE ELEMNTS WITH NEXT ONE
            {
                printf("Unique Element: %d\n",a[j]);//2.......5
            }
            break;
        }
    }
    return 0;
}