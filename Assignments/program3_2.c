//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts number from user and display its factors in decreasing order
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2 ; iCnt >= 1; iCnt--)       //O(N/2)
    {
        if((iNo % iCnt)== 0)
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

    FactRev(iValue);

    return 0;


}

/*
//Time Complexity : O(N / 2)
//Where N is the input 
*/