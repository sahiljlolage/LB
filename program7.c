// Write a program which checks whether number is divisible by 3 and 5.

#include<stdio.h>       //for printf and scanf
#include<stdbool.h>     //for bool data type instead typedef

////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckDivisible
// Input            : Integer
// Output           : Boolean
// Description      : Checks whether input is divisible by 3 and 5
// Author           : Sahil Jagdish Lolage
// Date             : 25/04/2023
// update           : 26/04/2023
//
////////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
        if (((iNo % 3) == 0)&&((iNo % 5) == 0))
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

        printf("Please enter number to check it is divisible by 3 and 5 : \n");
        scanf("%d",&iValue);

        bRet = CheckDivisible(iValue); //Function call 

        if (bRet == true)
        {
            printf("%d is completely divisible by 3 and 5\n",iValue);
        }
        else
        {
            printf("%d is not completely divisible by 3 and 5\n",iValue);
        }
        
        return 0;
}

/*
    ------------------------------------------------
    Expression1     Expression2        &&       ||

    




*/