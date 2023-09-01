/*
Name = Harsh Chaudhari 
Roll No. = 07
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>


int maxim(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

void main(){
    
    int n;
    printf("enter the length of the array:");
    scanf("%d", &n);
    
    int arr[n];
    printf("enter the array values:");
    for(int i=0; i<n; i++)
    {
        printf("enter %d th value: ", i+1);
        scanf("%d", &arr[i]);
    }
   
    printf("the maximum of the array is:%d", maxim(arr, 5));
}
