//accept n no. from user and display average
#include<stdio.h> //IO
#include<stdlib.h>  //for memory mgmt

// void Demo(int *Arr, int iLength)
float Average(int Arr[], int iLength)           
{   
    //step 5 : Perform the operation on array

    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum / (float)iLength);

}


int main()          //Entry point function
{
    int iSize = 0;  //to store size of array
    int *ptr = NULL; // to store address of array
    int iCnt = 0; //Loop Counter 
    float fRet = 0;
    

    //step 1: accept elements from user 
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

    // step 4 : Pass the array to the function
    fRet = Average(ptr,iSize);  // Demo(400, 4);
    printf("Average is : %f\n",fRet);
    //Step 6 : Deallocate the memory of array
    free(ptr);

    return 0;       // Return success to OS.
}