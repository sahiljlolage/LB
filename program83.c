// find out the largest element from array.
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;

}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter no. of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);         //consider ptr as array
    }
    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt  < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Maximum(ptr, iSize);
    printf("Largest element is : %d\n", iRet);

    free(ptr);
    
    return 0;

}


// time complexity o(n)
//where is n is element in the array



