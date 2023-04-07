#include<stdio.h>
/*
Write a program in C to count a total number of duplicate elements in an array
*/
int main()
{
    int n,i,count=0;//INITIALIZING THE ARRAY
    printf("Enter size of array: ");//5
    scanf("%d",&n);
    int a[n];//INITIALIZING THE ARRAY
    for(i=0;i<n;i++)
    {
        printf("Enter elements: "); //1....1.....1....2....5
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)//LOOP WILL BE START FROM THE 2nd ELEMENT OF THE ARRAY
        {
            if(a[i]==a[j])//1==1.....1==1.....1==1.....1==2.....2==5
            {
                count++;//0+1...1+1...2+1
                break;
            }
        }
    }
    printf("Number of duplicate digits: %d",count);//3
    return  0;
}