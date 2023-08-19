///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept n numbers from user and return  frequency of even numbers.
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength )
{
    int iCnt = 0;
    int iCounter = 0;
    int iCounter1 = 0;


    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]%2)== 0)
        {
            iCounter++;
        }
        else if((Arr[iCnt]%2)!= 0)
        {
            iCounter1++;
        }
    }
    return iCounter - iCounter1;
    
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

    iRet = Frequency(p,iSize);
    printf("%d",iRet);
    
    free(p);

    return 0;
}



