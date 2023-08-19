/////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts number from user and return difference between 
//summation of all its factors and non factors.
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumn = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)              //O(N)
    {
        if((iNo % iCnt) != 0 )
        {
            iSumn = iSumn + iCnt;
        }
        else if((iNo % iCnt) == 0 && iCnt!=iNo) 
        {
            iSum = iSum + iCnt;
        }
         return iSum-iSumn;

    }
 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;

}

