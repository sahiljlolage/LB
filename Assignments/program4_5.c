///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts total marks & obtained marks from user and 
// calculate percentage.  
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{   
    return (float)iNo2/iNo1*100; 
}



int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is %.1f",fRet);

    return 0;

    
}