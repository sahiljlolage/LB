//accept base and power from user and display result.
#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;  //creates user defined  varible for keyword 

ULONG CalculatePower(int iBase, int iPower)  //by default signed 
{
    int iCnt = 0;
    ULONG  iResult = 1;

    if((iBase < 0) || (iPower < 0))         //filter
    {
        return 0;
    }

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);

    printf("Enter power : \n");
    scanf("%d",&iValue2);

    iRet = CalculatePower(iValue1,iValue2);

   
        printf("Result is : %d\n",iRet);


    return 0;
}
