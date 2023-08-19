
#include<stdio.h>

float CalculateBill(int iAmount)
{
    if(iAmount <= 500 )
    {
        return iAmount;
    }
    else if((iAmount < 1500) && (iAmount > 500))
    {
        return (iAmount) - (( iAmount / 100 ) * 10);
    }
    else if(iAmount > 1500)
    {
        return (iAmount) - ((iAmount / 100) * 15);
    }

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter bill amount : ");
    scanf("%d",&iValue);

    iRet = CalculateBill(iValue);
    printf("%d",iRet);

    return 0;

}