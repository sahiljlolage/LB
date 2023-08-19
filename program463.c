#include<stdio.h>

// input : 4
// output : 1   2   3   4
void DisplayR(int iNo)      // recursion
{
    static int iCnt = 1;

    while(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
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

    // printf("End of Main\n");
    
    return 0;

}