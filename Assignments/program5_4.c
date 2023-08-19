//////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts N from user and print all odd numbers up to N.  
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo-4; iCnt++)        //O(n - 4)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ",iCnt);

        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;

}