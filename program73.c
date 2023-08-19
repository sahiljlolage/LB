// array 
#include<stdio.h>
#include<stdlib.h>      //standard library

int main()
{
    int Arr[5];         //static memory
    int iCnt = 0;

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elememts of array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d",Arr[iCnt]);
    }

    return 0;
}


//error
