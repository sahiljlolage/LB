#include<stdio.h>

// input : 6785
// output : 5 8 7 6
int SumR(int iNo)     // recursion 
{
    int iDigit = 0;
    static int iSum = 0;    // value wre preserving 
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SumR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet =  0;


    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    iRet = SumR(iValue);
    printf("Addition of digits : %d\n",iRet);

    return 0;

}