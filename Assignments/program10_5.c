///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept n numbers from user and accept one another number as NO ,
// return frequency of NO from it.
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    int iCounter = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((Arr[iCnt])== iNo)
        {
            iCounter++;
        }
        
    }
    return iCounter;
    
}

int main()
{
    int iSize = 0, iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number ");
    scanf("%d",&iValue);


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

    iRet = Frequency(p,iSize,iValue);
    printf("%d",iRet);
    
    free(p);

    return 0;
}



