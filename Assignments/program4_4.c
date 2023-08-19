///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts three numbers and print its multiplication.  
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iRes = 0;
    if(iNo1==0 && iNo2==0 && iNo3==0)
    {
        return iRes;
    }
    if(iNo1==0)
    {
        iNo1 = 1;
    }
    if(iNo2==0)
    {
        iNo2 = 1;
    }
    if(iNo3==0)
    {
        iNo3 = 1;
    }
    iRes = iNo1 * iNo2 * iNo3;
    
    return iRes;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0,iRet = 0;

    printf("Please enter three numbers ");
    scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is %d",iRet);

    return 0;
}