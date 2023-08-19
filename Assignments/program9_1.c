////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept n numbers from user and return difference between
// summation of even elements and summation of odd elements.
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
    int iCount = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCount = 0; iCount < iLength; iCount++)
    {
        if((Arr[iCount]%2) == 0)
        {
            iSumEven = iSumEven + Arr[iCount];
        }
        else if((Arr[iCount]%2)!= 0)
        {
            iSumOdd = iSumOdd + Arr[iCount];
        }
    }
    return iSumEven - iSumOdd;
}


int main()
{
    int iSize = 0, iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }
    printf("Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet =  Difference(p, iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;


}