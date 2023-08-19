#include<stdio.h>

void FactorsI(int iNo)     // recursion 
{
    int iCnt = 1;
    
    while(iCnt <= iNo / 2)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    int iRet =  0;


    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    FactorsI(iValue);

    return 0;

}