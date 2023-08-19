#include<stdio.h>       //pf and sf statement 

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= (iNo / 2); iCnt++)        //O(N/2)
    {
        if ((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue); 

    DisplayFactors(iValue);
    return 0;
}

//Time Complexity : o(N / 2)
//Where N is the input 