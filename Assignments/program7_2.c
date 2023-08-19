////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accept number from user and check 
// whether it contains 0 in it or not.
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int flag = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            flag = 1;
            break;
            
        }
        iNo = iNo / 10;
    }
    if(flag == 1)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}