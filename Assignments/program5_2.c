///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts three numbers and print numbers till that 
// number.  
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 1;
    while(iCnt <= iNo)          //O(N)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}