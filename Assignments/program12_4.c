///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept N numbers from user and display all such numbers which 
// contains 3 digits in it.
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int arr[],int iLength)
{
    
    int iCnt=0,iDigit=0,count=0,iValue=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        count = 0;
        iValue = arr[iCnt];     
        while (iValue != 0)     
        {
            iValue = iValue / 10;
            count++;
        }
        if(count == 3)
        {
            printf("%d\t",arr[iCnt]);           }
        
    }
}
int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;

    }

    printf("Enter %d elements ",iSize);
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p,iSize);

    free(p);

    return 0;
}