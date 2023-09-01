/*
name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>
void main()
{
    
    int n;
    printf("enter the number of elements you want in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    int counter =0;
    int temp;
    for(int i=0; i<n; i++)
    {
        temp =0;
        /*checking that an elemnt is present how many times in array by temporary variable(temp)*/
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                counter++;
                temp++;
            }
        }
        if(temp>1){
           
            counter-=temp;
        }
    }
    /*printing the duplicate elements counter*/
    printf("number of duplicate elements are: %d", counter);
}
