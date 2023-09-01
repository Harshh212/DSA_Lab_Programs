/* Name=Harsh Chaudhari
   Roll No=07
   SE-IT (sem 3)
   2023-24
     */

#include <stdio.h>

int areArraysIdentical(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr1) / sizeof(arr1[0]);

    int result = areArraysIdentical(arr1, arr2, size);

    if (result) {
        printf("The arrays are identical=1.\n");
    } else {
        printf("The arrays are not identical=0.\n");
    }

    return 0;
}

