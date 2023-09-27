/*
Name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/
//Count Sort
#include <stdio.h>
#include <stdlib.h>
void CountSort(int arr[],int n)
{
    int i,j,max;
    max=arr[0];
    for (i = 1; i <n ; ++i) {
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int* count=(int *) calloc((max+1),sizeof(int));
    for (i=0;i<n;i++){
        count[arr[i]]=count[arr[i]]+1;
    }
    i=0;
    j=0;
    while(i<max+1){
        if(count[i]>0){
            arr[j]=i;
            count[i]=count[i]-1;
            j++;
        } else{i++;
            }
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
    CountSort(arr,n);
    return 0;
}
