#include<stdio.h>

int SchoolFees(int iStandard)
{
    
    if(iStandard == 1)
    {
        return 8900;
    }
    if(iStandard == 2)
    {
        return 12790;
    }
    if(iStandard == 3)
    {
        return 21000;
    }
    if(iStandard == 4)
    {
        return 23450;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter standard : \n");
    scanf("%d",&iValue);

    iRet = SchoolFees(iValue);
    if(iRet == -1)
    {
        printf("Wrong input");
    }else{
        printf("%d",iRet);
    }
    
    return 0;
}