/*
    Steps to create the application

    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the written program 

*/

//Write a program which performs addition of two numbers

/*
    Algorithm

    START
        Accept First number as No1
        Accept Second number as No2
        Create one variable as ANS
        Perform addition of No1 and No2 
        Store the addition into variable ANS
        Display the value of ANS
    STOP

*/

////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program which performs addition of two numbers
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Addition
// Input            : unsigned integer, unsigned integer 
// Output           : unsigned integer 
// Description      : Performs addition of two Numbers 
// Author           : Sahil Jagdish Lolage 
// Date             : 18/04/2023
//
////////////////////////////////////////////////////////////////////////////////

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;

} 

////////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter the First number");
    scanf("%d",&iNo1);

    printf("Enter the Second Number");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is : %d \n",iAns);

    return 0;
        

}