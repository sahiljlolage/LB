#include<stdio.h>

void DisplayR(int iNo)      // recursion
{
    static int iCnt = 1;

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

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    DisplayR(iValue);

    printf("End of Main\n");
    
    return 0;

}