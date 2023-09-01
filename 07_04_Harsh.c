/*
Name = Harsh Chaudhari
Roll No. = 07
SE-IT (sem 3)
2023-24
*/

#include<stdio.h>
#include<string.h>


struct student
{
    int rollNo;
    char name[20];
    float perc;
}std[5];

void main()
{

    for(int i=0; i<5; i++)
    {
        printf("enter the details of %d th student\n", i+1);
        printf("enter the roll no.: ");
        scanf("%d", &std[i].rollNo);
        printf("enter the name: ");
        scanf("%s", std[i].name);
        printf("enter the percentage.: ");
        scanf("%f", &std[i].perc);
        printf("\n");
    }
    
    
    for(int i=0; i<5; i++)
    {
        
        float max=std[i].perc;
        int idx=i;
        for(int j=i; j<5; j++)
        {
            if(max<std[j].perc)
            {
                
                max=std[j].perc;
                idx=j;
            }
        }
        
        int num=std[idx].rollNo;
        std[idx].rollNo=std[i].rollNo;
        std[i].rollNo=num;
        char temp[20];
        strcpy(temp,std[idx].name);
        strcpy(std[idx].name,std[i].name);
        strcpy(std[i].name,temp);
        std[idx].perc=std[i].perc;
        std[i].perc=max;
    }

    
    printf("\n\n\n\n");
    for(int i=0; i<5; i++)
    {
        printf("the details of %d th student\n", i+1);
        printf("the roll no.: ");
        printf("%d\n", std[i].rollNo);
        printf("the name: ");
        printf("%s\n", std[i].name);
        printf("enter the percentage.: ");
        printf("%f\n", std[i].perc);
        printf("\n");
    }

}
