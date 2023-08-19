/*
Write a program which accepts the marks and display 
0-35 fail
    pass
    50-60 second
    60-75 first
    75+ distinction
*/

#include<stdio.h>

void DisplayClass(float fmarks)
{
    if ((fmarks < 0.0f) || (fmarks > 100.00f))         //Filter
        {
           printf("Invalid Input\n");
           printf("Please enter a marks in between the range 0 to 100 ");
           return;
        }
    if ((fmarks >= 0.0f) && (fmarks < 35.00f))
    {
        printf("You are Fail\n");
    }
    else if((fmarks >= 35.00f) && (fmarks < 50.00f))
        {
            printf("You got pass class\n");
        }
        else if((fmarks >= 50.00f) && (fmarks < 60.00f))
        {
            printf("You got second class\n");
        }
        else if((fmarks >= 60.00f) && (fmarks < 75.00f ))
        {
            printf("You got first class\n");
        }
        else if((fmarks >= 75.00f) && (fmarks < 100.00f))
        {
            printf("You got first class with distinction");
        }
}

////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
}