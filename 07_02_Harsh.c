/*
Name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>

/*function that prints the pascal's triangle*/
void pascal(int new_row[],int prev_row[], int n, int a)
{
    if(a==n-1)
    {
        return;
    }
    for(int i=0; i<a; i++)
    {
        
        new_row[i]=prev_row[i]+prev_row[i-1];
    }
    new_row[a]=1;
    for(int i=0; i<n-a; i++)
    {
        
        printf(" ");
    }
    for(int i=0; i<=a; i++)
    {
        
        printf("%3d", new_row[i]);
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        prev_row[i]=new_row[i];
    }
    pascal(new_row, prev_row, n, a+1);
}


int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}


int comb(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void main()
{
    
    int n;
    printf("enter the value of number of rows: ");
    scanf("%d", &n);

    
    
    int arr1[n], arr2[n];
    pascal(arr1, arr2, n+1, 0);
    
}
