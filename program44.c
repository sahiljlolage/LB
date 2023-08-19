//while back.
#include<stdio.h>

void DisplayF(int iNo)
{
    int iCnt = iNo;

    while (iCnt >= 1)
    {
        printf("%d\t",iCnt);
        iCnt--;
    }
    


}


int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayF(iValue);
    
    return 0;
}
