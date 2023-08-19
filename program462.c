#include<stdio.h>

// input : 4
// output : 1   2   3   4
void DisplayI(int iNo)      // recursion
{
    int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        // DisplayR(iNo);      // recursive call
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    DisplayI(iValue);

    printf("End of Main\n");
    
    return 0;

}