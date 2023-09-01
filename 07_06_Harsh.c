/*
Name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/


#include<stdio.h>


int n, choice;


void update(int arr[])
{
    int idx, val;
    printf("Enter the index at which you want to insert value: ");
    scanf("%d", &idx);
    if(idx>n)
    {
        printf("error");
        return;
    }
    printf("Enter the value you want to insert: ");
    scanf("%d", &val);
    arr[idx-1] = val;
}


void delete(int arr[])
{
    
    int idx;
    printf("Enter the index that you want to delete: ");
    scanf("%d", &idx);
    for(int i=idx; i<n; i++)
    {
        arr[i-1]=arr[i];
    }
    n--;printf("%d", n);
}

void traverse(int arr[])
{
    
    for(int i=0; i<n; i++)
    {
        printf("\nThe %dth value of the array is %d", i+1, arr[i]);
    }
}


void search(int arr[])
{
    int val, idx;
    printf("Enter the value that whose position you need to find: ");
    scanf("%d", &val);

    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==val)
        {
           
            idx= i+1;
            break;
        }
        if(i==n-1)
        {
            
            printf("value not found");
            return;
        }
    }
    printf("%d is %dth value in the array", val, idx);
}
void main()
{
   
    printf("Enter the array length: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    
    while(choice!=5)
    {
        
        printf("\n\n\n\nThese are the menu panel:");
        printf("\n1. Update");
        printf("\n2. Delete");
        printf("\n3. Traverse");
        printf("\n4. Search");
        printf("\n5. exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

       
        switch(choice)
        {
            
            case 1: update(arr);
                break;
            case 2: delete(arr);
                break;
            case 3: traverse(arr);
                break;
            case 4: search(arr);
                break;
            case 5:
                break;
            default:
                printf("incorrect choice");
        }
    }
    
    printf("You got exit");
}
