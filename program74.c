#include<stdio.h> //IO
#include<stdlib.h>  //for memory mgmt

int main()          //Entry point function
{
    int iSize = 0;  //to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0; //Loop Counter 

    //step 1: accept 
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    //step 2 : allocate memory dynamically 
    ptr = (int *)malloc(iSize * sizeof(int));

    //step 3 : accept the values from user 
    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //elements display

    printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    return 0;       // Return success to OS.
}