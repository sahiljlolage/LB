//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts number from user and display its multiplication of factors
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)   //O(N/2)
    {
        if((iNo % iCnt)== 0)
        {
            iMul = iMul * iCnt; 
        }
        
    }
    return iMul;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors : %d\n",iRet);



    return 0;

}

/*
//Time Complexity : O(N / 2)
//Where N is the input 
*/