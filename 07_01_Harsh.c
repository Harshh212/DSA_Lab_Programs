/*
name = Harsh Chaudhari
Roll No. = 07
SE-IT sem 3
2023-24
*/

#include<stdio.h>

/*function that returns nth term of fibonnacci series*/
int fib(int n)
{
    if((n==1)||(n==2))
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

void main()
{
    
    int num;
    printf("enter the number you want to check for: ");
    scanf("%d", &num);


    for(int i=1;; i++)
    {
        if(num==fib(i))
        {
            
            printf("True");
            printf("\nThe number %d is a part of fibonacci series and it is %dth in the series", num, i);
            break;
        }
        if(num<fib(i))
        {
            
            printf("False");
            printf("\nThe number %d is not a part of fibonacci series", num);
            break;
        }
    }
}
