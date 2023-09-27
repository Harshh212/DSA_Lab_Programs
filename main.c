/*
Name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/
//Radix Sort
#include <stdio.h>
#include <stdlib.h>


void CountSort(int arr[],int n,int pass)
{
    int i,j;
    int b[n];
    int* count=(int *) calloc((10),sizeof(int));
    for (i=0;i<n;i++){
        ++count[(arr[i]/pass)%10];
    }
    for (i=1;i<10;i++) {
        count[i]=count[i]+count[i-1];
    }

    for(i=n-1;i>=0;i--){
        b[--count[(arr[i]/pass)%10]]=arr[i];
    }
    for (int k = 0; k < n; ++k) {
        arr[k]=b[k];
    }
}

void RadixSort(int arr[],int n){
    int max;
    max=arr[0];
    for (int i = 1; i <n ; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    for (int i=1;(max/i)>0;i*=10){
        CountSort(arr,n,i);
    }
    for (int k = 0; k <n ; ++k) {
        printf("%d\n",arr[k]);
    }
}
int main() {
    int n;
    printf("Enter the size of the array:-");
    scanf("%d",&n);
    int arr[n];
    for (int k = 0; k <n ; ++k) {
        printf("Enter the %d element of the array:-",k+1);
        scanf("%d",&arr[k]);
    }
    printf("Sorted Array:-\n");
    RadixSort(arr,n);
    return 0;
}
