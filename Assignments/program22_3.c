///////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : write a program which accept string from user and return difference between frequency 
// of small characters and frequency of capital characters .
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int isCnt = 0,icCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {   
            
            isCnt++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {   
            
            icCnt++;
        }
        str++;
        
    }

    return iMsCnt - icCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}