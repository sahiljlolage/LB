///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept N numbers from user and return product of all odd elements
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[],int iLength)
{
    int iCnt = 0;
    int iProduct = 1;


    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt]% 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
        else
        {
            iProduct = 0;
        }
    }
  return iProduct;

}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);

    }
    iRet = Product(p,iSize);
    printf("%d",iRet);

    free(p);

    return 0;

}