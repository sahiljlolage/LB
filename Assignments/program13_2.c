#include<stdio.h>

float IncomeTax(int iAmount)
{
    int iNo1 = 0,iNo2 = 0;
    if(iAmount < 500000)
    {
        return iNo1;
    }
    if(iAmount > 500000 && iAmount < 1000000)
    {   
        iNo2 = iAmount - 500000;
        iNo2 = iNo2 / 10;
        return iNo1 + iNo2;
    }
    if(iAmount > 1000000 && iAmount < 2000000)
    {
             
             iNo2 = iAmount - 1000000;
             iNo2 = iNo2 * 20 / 100;
             return iNo2 + 50000;

    }
    if(iAmount > 2000000)
    {
        iNo2 = iAmount - 2000000;
        iNo2 = iNo2 * 30 / 100;
        return iNo2 + 50000 + 200000;
    }

       
}

int main()
{
    
    int iValue = 0,iRet = 0;
    printf("Enter Amount : ");
    scanf("%d",&iValue);

    iRet = IncomeTax(iValue);
    printf("%d",iRet);

    return 0;
}