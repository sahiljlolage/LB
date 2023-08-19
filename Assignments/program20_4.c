///////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept Character from user and check whether it is small case or not (a-z).
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    int iCount = 0;
    while(ch != '\0')
    {
        if((ch >= 'a') && (ch <= 'z'))
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case Character");
    }
    else
    {
        printf("It is not small case Character");
    }

    return 0;

}