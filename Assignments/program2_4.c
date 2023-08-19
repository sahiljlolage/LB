/*
Assignment 2

Q.4.Accept two numbers from user and display first number in second number of times 

*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Program to Accept two numbers from user and display first number in second number of times. 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display 
// Input            : integer,integer
// Output           : signed integer
// Description      : Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo".
// Author           : Sahil Jagdish Lolage 
// Date             : 22/04/2023
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int display(int iNo,int iFrequency)
{
    //int int = 0;
    int i = 0;

    if (iFrequency < 0)
    { 
        iFrequency = -(iFrequency);
    }
    

    for(i=0;i<iFrequency;i++)
    {
        printf("%d\t",iNo);

    }

}

////////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    printf("Enter frequency ");
    scanf("%d",&iCount);

    display(iValue,iCount);

    return 0;


}
