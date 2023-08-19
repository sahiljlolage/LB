#include<stdio.h>

// input : 6785
// output : 5 8 7 6
void DisplayR(int iNo)     // recursion 
{
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\t",iDigit);
        iNo = iNo / 10;
        DisplayR(iNo);      // Tail recursion
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    DisplayR(iValue);
    
    return 0;

}