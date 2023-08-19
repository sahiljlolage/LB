// input : 4
// output :
//          *   *   *   *

#include<stdio.h>

void DisplayI(int iNo)      // iteration
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
    }
}

void DisplayR(int iNo)      // recursion
{
    int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        DisplayR(iNo);      // recursive call
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    return 0;

}