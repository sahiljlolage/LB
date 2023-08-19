/////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts number from user and display all its non factors 
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)  // O(N)
    {
        if ((iNo % iCnt)!= 0)
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}