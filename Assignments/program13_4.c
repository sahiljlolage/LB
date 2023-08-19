#include<stdio.h>

int TouristBill(int iKilometer)
{
    int iRes = 0,iRes1 = 0,iRun = 0;
    if(iKilometer > 100)
    {
        iRes = 100 * 25;
        iRes1 = iKilometer - 100;
        iRun = iRes + (iRes1 * 15);
    }
    else
    {
        iRun = iKilometer * 25;
    }
    return iRun;

}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter kilometer : \n");
    scanf("%d",&iValue);
    
    iRet = TouristBill(iValue);
    printf("%d",iRet);

    return 0;
}

