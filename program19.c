

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)            //Filter
    {
        printf("Error : Invalid input\n");
        printf("Note : Please enter a positive Value\n");
        return;
    }
    

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

////////////////////////////////////////////////////////////////////////////
//Entry Point Function
////////////////////////////////////////////////////////////////////////////
 

int main()
{
    
    int iValue = 0;

    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    
    return 0;

}