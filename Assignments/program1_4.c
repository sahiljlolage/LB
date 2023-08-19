/*
Assignment 1

Q.4. Accept one number and check whether it is divisible by 5 or not.

*/

//////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Program to Accept one number and check whether it is divisible by 5 or not.
//
/////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Check
// Input            : integer 
// Output           : integer
// Description      : Accept one number and check whether it is divisible by 5 or not.
// Author           : Sahil Jagdish Lolage 
// Date             : 22/04/2023
//
////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
    if ((iNo % 5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    

}

////////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0 ;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet =  Check(iValue);

    if (bRet == TRUE)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");

    }
    
    return 0;

}
