#include<stdio.h>

// input : 6785
// output : 5 8 7 6
void DisplayI(int iNo)      
{
    while (iNo != 0)
    {
        printf("%d\t",iNo % 10);
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d",&iValue);
    
    DisplayI(iValue);

    // printf("End of Main\n");
    
    return 0;

}