///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts N and print first 5 multiplies of N.  
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    // int iCnt = 0;
    // int iMultiple = 0;

    // for(iCnt = 1; iCnt <= iNo + 1 ; iCnt++)      //O(n + 1)
    // {
    //     if(iCnt <= 6)
    //     {
    //         iMultiple = iMultiple + iNo;
    //         printf("%d ",iMultiple);
    //     }
        
    // }

  int iCnt = 0;
  for(iCnt=1; iCnt <= 5; iCnt++)
  
  {
    printf("%d \t",iNo*iCnt);
  }
  }
    


int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);

    MultiplyDisplay(iValue);

    return 0;

}