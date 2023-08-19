// Write a program which checks whether number is even or odd.

#include<stdio.h>       //for printf and scanf
#include<stdbool.h>     //for bool data type instead typedef

////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckEvenOdd
// Input            : Integer
// Output           : Boolean
// Description      : Checks whether input is even or odd
// Author           : Sahil Jagdish Lolage
// Date             : 25/04/2023
// update           : 26/04/2023
//
////////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
        if ((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
        
}

////////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
        int iValue = 0;         //variable to accpt input
        bool bRet = false;      //variable to accept return value

        printf("Please enter number to check it is even or odd : \n");
        scanf("%d",&iValue);

        bRet = CheckEvenOdd(iValue); //Function call 

        if (bRet == true)
        {
            printf("%d is Even number\n",iValue);
        }
        else
        {
            printf("%d is Odd number\n",iValue);
        }
        
        return 0;
}